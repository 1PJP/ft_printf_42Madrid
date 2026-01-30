/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:56:24 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:11:00 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int	nbr_save;
	int			sig;
	int			i;

	nbr_save = 0;
	sig = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr [i] == '-')
	{
		if (nptr[i] == '-')
			sig = sig * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr_save = nbr_save * 10;
		nbr_save = nbr_save + nptr[i] - '0';
		i++;
	}
	return (nbr_save * sig);
}
/*#include <string.h>
#include <stdio.h>

//+2147483647 max.
//-2147483648 min.

int	main(void)
{
	char	nbrmax[] = "2147483647"; 
	char	nbrmin[] = "-2147483648";
	int	funcmax;
	int	funcmin;

	printf("%s\n%s\n", nbrmax, nbrmin);;
	funcmax = ft_atoi(nbrmax);
	funcmin = ft_atoi(nbrmin);
	printf("%d\n", funcmax);
	printf("%d\n", funcmin);
	return (0);
}*/