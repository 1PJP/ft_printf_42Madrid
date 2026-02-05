/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 23:42:18 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/05 21:04:25 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexa(unsigned int nbr, char s)
{
	char	*base_16;
	int	count;

	if (s == 'X')
		base_16 = "0123456789ABCDEF";
	else
		base_16 = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
		count += ft_printf_hexa(nbr / 16, s);
	count += ft_printf_chr(base_16[nbr % 16]);
	return (count);
}
/*#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	unsigned int	n;

	n = 255;
	write(1, "my  x = ", 8);
	ft_printf_hexa(n, 'x');
	write(1, "\n", 1);
	printf("printf x = %x\n\n", n);

	write(1, "my  X = ", 8);
	ft_printf_hexa(n, 'X');
	write(1, "\n", 1);
	printf("printf X = %X\n\n", n);

	n = 0;
	write(1, "my  x 0 = ", 10);
	ft_printf_hexa(n, 'x');
	write(1, "\n", 1);

	printf("printf x 0 = %x\n\n", n);

	n = -42;
	write(1, "my  x -42 = ", 13);
	ft_printf_hexa(n, 'x');
	write(1, "\n", 1);

	printf("printf x -42 = %x\n", n);

	return (0);
}*/
