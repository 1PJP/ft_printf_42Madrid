/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 12:30:41 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:11:52 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dig_sig(long nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ch;
	int		i;
	long	nbr;

	nbr = n;
	i = dig_sig(nbr);
	ch = malloc(i + 1);
	if (!ch)
		return (NULL);
	ch[i] = '\0';
	if (nbr < 0)
	{
		ch[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		ch[0] = '0';
	while (nbr > 0)
	{
		ch[--i] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (ch);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	int	max = 2147483647;
	int	min = -2147483648;
	char	*funcmax;
	char	*funcmin;

	printf("%d\n%d\n", max, min);
	funcmax = ft_itoa(max);
	funcmin = ft_itoa(min);
	printf("%s\n", funcmax);
	printf("%s\n", funcmin);
	return (0);
}*/