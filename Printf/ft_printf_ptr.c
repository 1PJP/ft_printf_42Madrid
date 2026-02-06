/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 23:38:40 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/06 00:45:53 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexa_ptr(unsigned long nbr)
{
	char	*base_16;
	int	count;
	
	base_16 = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
		count += hexa_ptr(nbr / 16);
	count += ft_printf_chr(base_16[nbr % 16]);
	return (count);
}
int	ft_printf_ptr(void *ptr)
{
	unsigned long	p;
	int	i;
	if (ptr == NULL)
		return (ft_printf_str("(nil)"));
	i = 0;
	i = i + ft_printf_chr('0');
	i = i + ft_printf_chr('x');
	p = (unsigned long )ptr;
	i = i + hexa_ptr(p);
	return (i);
}
/*#include <stdio.h>
#include "ft_printf.h"
int	main(void)
{
	int str;
	int *ptr;
	ptr = &str;

	write(1, "my ft = ", 9);
	ft_printf_ptr(ptr);
	ft_printf_chr('\n');

	printf("origin  = %p\n\n", ptr);

	write(1, "my ft = ", 9);
	ft_printf_ptr(NULL);
	ft_printf_chr('\n');

	printf("origin = %p\n", NULL);

	return (0);
}*/
