/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:56:05 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/05 23:02:22 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int n;
	int *ptr;
	char c;
	char *str;
	unsigned int unsig;

	n = 42;
	ptr = &n;
	c = 'A';
	str = "Hola";
	unsig = 4294967295;

	// caso para %c
	ft_printf("ft_printf %%c: %c\n", c);
	printf("printf    %%c: %c\n\n", c);

	// caso para %s
	ft_printf("ft_printf %%s: %s\n", str);
	printf("printf    %%s: %s\n", str);
	ft_printf("ft_printf %%s NULL: %s\n", NULL);
	printf("printf    %%s NULL: %s\n\n", NULL);

	// caso para %d y para %i
	ft_printf("ft_printf %%d: %d\n", n);
	printf("printf    %%d: %d\n", n);
	ft_printf("ft_printf %%d negativo: %d\n", -n);
	printf("printf    %%d negativo: %d\n", -n);
	ft_printf("ft_printf %%i: %i\n", n);
	printf("printf    %%i: %i\n", n);
	ft_printf("ft_printf %%i negativo: %i\n", -n);
	printf("printf    %%i negativo: %i\n\n", -n);

	// caso para %u
	ft_printf("ft_printf %%u: %u\n", unsig);
	printf("printf    %%u: %u\n", unsig);
	ft_printf("ft_printf %%u 0: %u\n", 0);
	printf("printf    %%u 0: %u\n\n", 0);

	// caso para %x y para %X
	ft_printf("ft_printf %%x: %x\n", unsig);
	printf("printf    %%x: %x\n", unsig);
	ft_printf("ft_printf %%X: %X\n", unsig);
	printf("printf    %%X: %X\n", unsig);
	ft_printf("ft_printf %%x 0: %x\n", 0);
	printf("printf    %%x 0: %x\n", 0);
	ft_printf("ft_printf %%X 0: %X\n", 0);
	printf("printf    %%X 0: %X\n\n", 0);

	// caso para %p
	ft_printf("ft_printf %%p: %p\n", ptr);
	printf("printf    %%p: %p\n", ptr);
	ft_printf("ft_printf %%p NULL: %p\n", NULL);
	printf("printf    %%p NULL: %p\n\n", NULL);

	// caso para %%
	ft_printf("ft_printf %% porcentaje: %%\n");
	printf("printf    %% porcentaje: %%\n\n");

	// Casos combinados y múltiples %%
	ft_printf("ft_printf múltiple: %c %s %d %i %u %x %X %p %%\n",
	          c, str, n, -n, unsig, unsig, unsig, ptr);
	printf("printf    múltiple: %c %s %d %i %u %x %X %p %%\n",
	       c, str, n, -n, unsig, unsig, unsig, ptr);

	return 0;
}
