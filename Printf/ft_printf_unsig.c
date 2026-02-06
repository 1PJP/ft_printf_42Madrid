/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 23:41:49 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/06 01:03:22 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsig( unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i = i + ft_printf_unsig(n / 10);
	i += ft_printf_chr((n % 10) + '0');
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	unsigned int	nbr;
	char	*str;

	nbr = -42;
	str = "my funtion ";
	ft_printf_str(str);
	ft_printf_unsig(nbr);
	ft_printf_chr('\n');
	printf("origin %u\n\n", nbr);

	nbr = 42;
	ft_printf_str(str);
	ft_printf_unsig(nbr);
	ft_printf_chr('\n');
	printf("origin %u\n\n", nbr);

	nbr = 4294967295;
	ft_printf_str(str);
	ft_printf_unsig(nbr);
	ft_printf_chr('\n');
	printf("origin %u\n\n", nbr);
}*/