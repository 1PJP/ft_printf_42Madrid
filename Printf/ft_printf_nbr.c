/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 00:27:23 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/08 15:05:53 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_nbr(int n)
{
	long	ch;
	int		i;

	ch = (long )n;
	i = 0;
	if (ch < 0)
	{
		i = i + ft_printf_chr('-');
		ch = -ch;
	}
	if (ch >= 10)
		i = i + ft_printf_nbr(ch / 10);
	i += ft_printf_chr((ch % 10) + '0');
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	int	func;
	int	max;
	int	min;

	min = -2147483648;
	max = 2147483647;
	
	write(1, "int_min\n", 9);
	write(1, "my func ", 8);
	func = ft_printf_nbr(min);
	write(1, "\n", 1);
	printf("origin d %d\n", min);
	printf("origin i %i\n", min);
	write(1, "my total = ", 11);
	ft_printf_nbr(func);
	write(1, "\n", 1);
	printf("origin d total %d\n", func);
	printf("origin i total %i\n", func);
	write(1, "\n\n", 2);
	
	write(1, "int_max\n", 9);
	write(1, "my func ", 8);
	func = ft_printf_nbr(max);
	write(1, "\n", 1);
	printf("origin d %d\n", max);
	printf("origin i %i\n", max);
	write(1, "my total = ", 11);
	ft_printf_nbr(func);
	write(1, "\n", 1);
	printf("origin d total %d\n", func);
	printf("origin i total %i\n", func);
	write(1, "\n", 1);

	return (0);
}*/