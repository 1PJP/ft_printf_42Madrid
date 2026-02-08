/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:05:20 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/08 20:43:41 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		ft;
	int		pf;
	char	*str_null;
	int		a;

	str_null = NULL;
	a = 42;
	//0 control in case there is no managed format
	printf("Test format unknown example %%j\n");
	ft = ft_printf("ft : hello %j crack\n");
	pf = printf("pf : hello %j crack\n");
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	// 1 NULL format
	printf("Test 1 = Format NULL\n");
	ft = ft_printf(NULL);
	printf("return = ft_printf(NULL) return = %d (expected -1)\n\n", ft);

	// 2  %%c 
	printf("Test 2 = %%c\n");
	ft = ft_printf("ft : %c\n", 'J');
	pf = printf("pf : %c\n", 'J');
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	// 3 %%s normal / empty / NULL 
	printf("Test 3 = %%s normal\n");
	ft = ft_printf("ft : %s\n", "spasiva !");
	pf = printf("pf : %s\n", "spasiva !");
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	printf("Test 4 = %%s empty\n");
	ft = ft_printf("ft : %s\n", "");
	pf = printf("pf : %s\n", "");
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	printf("Test 5 = %%s NULL\n");
	ft = ft_printf("ft : %s\n", str_null);
	pf = printf("pf : %s\n", str_null);
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	// 4 %%d / %%i 
	printf("Test 6 = %%d y %%i\n");
	ft = ft_printf("ft : %d %i %d\n", 42, -42, 0);
	pf = printf("pf : %d %i %d\n", 42, -42, 0);
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	printf("Test 7 = INT_MIN / INT_MAX\n");
	ft = ft_printf("ft : %d %d\n", INT_MIN, INT_MAX);
	pf = printf("pf : %d %d\n", INT_MIN, INT_MAX);
	printf("Return = ft: %d | pf: %d\n\n", ft, pf);

	// 5 %%u 
	printf("Test 8 = %%u\n");
	ft = ft_printf("ft : %u %u\n", 0, UINT_MAX);
	pf = printf("pf : %u %u\n", 0, UINT_MAX);
	printf("Return = ft: %d | pf: %d\n\n", ft, pf);

	printf("Test 9 = %%u with -1\n");
	ft = ft_printf("ft : %u\n", -1);
	pf = printf("pf : %u\n", -1);
	printf("return = ft: %d | pf: %d\n\n", ft, pf);
	
	// 6 %%x / %%X 
	printf("Test 10 = %%x / %%X\n");
	ft = ft_printf("ft : %x %X %x\n", 255, 255, 0);
	pf = printf("pf : %x %X %x\n", 255, 255, 0);
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	printf("Test 11 = %%x UINT_MAX\n");
	ft = ft_printf("ft : %x\n", UINT_MAX);
	pf = printf("pf : %x\n", UINT_MAX);
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	// 7 %%p 
	printf("Test 12 = %%p normal\n");
	ft = ft_printf("ft : %p\n", &a);
	pf = printf("pf : %p\n", &a);
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	printf("Test 13 = %%p NULL\n");
	ft = ft_printf("ft : %p\n", NULL);
	pf = printf("pf : %p\n", NULL);
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	// 8 %% percentages 
	printf("Test 14 = %%%% (percentages)\n");
	ft = ft_printf("ft : %% %% %%\n");
	pf = printf("pf : %% %% %%\n");
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	// 9 total mix 
	printf("Test 15 = total mix\n");
	ft = ft_printf(
		"ft : %c %s %d %i %u %x %X %p %%\n",
		'A', str_null, -42, 42, UINT_MAX, 255, 255, &a
	);
	pf = printf(
		"pf : %c %s %d %i %u %x %X %p %%\n",
		'A', str_null, -42, 42, UINT_MAX, 255, 255, &a
	);
	printf("return = ft: %d | pf: %d\n\n", ft, pf);

	// 10 cese spaces %% %%c
	printf("Test 16 = %% %%c (spaces )\n");
	ft = ft_printf("ft : %%%% %c\n");
	pf = printf("pf : %%%% %c\n");
	printf("return = ft: %d | pf: %d\n\n", ft, pf);
	
	return (0);
}*/