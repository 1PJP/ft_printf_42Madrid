/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:05:20 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/08 15:08:06 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		ret_ft;
	int		ret_pf;
	char	*str_null;
	int		a;

	str_null = NULL;
	a = 42;


	//0 control in case there is no managed format
	printf("Test format unknown example %%j\n");
	ret_ft = ft_printf("ft : hello %j crack\n");
	ret_pf = printf("pf : hello %j crack\n");
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	// 1 NULL format
	printf("Test 1 = Format NULL\n");
	ret_ft = ft_printf(NULL);
	printf("ft_printf(NULL) return = %d (expected -1)\n\n", ret_ft);

	// 2  %%c 
	printf("Test 2 = %%c\n");
	ret_ft = ft_printf("ft : %c\n", 'Z');
	ret_pf = printf("pf : %c\n", 'Z');
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	// 3 %%s normal / empty / NULL 
	printf("Test 3 = %%s normal\n");
	ret_ft = ft_printf("ft : %s\n", "spasiva !");
	ret_pf = printf("pf : %s\n", "spasiva !");
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	printf("Test 4 = %%s empty\n");
	ret_ft = ft_printf("ft : %s\n", "");
	ret_pf = printf("pf : %s\n", "");
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	printf("Test 5 = %%s NULL\n");
	ret_ft = ft_printf("ft : %s\n", str_null);
	ret_pf = printf("pf : %s\n", str_null);
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	// 4 %%d / %%i 
	printf("Test 6 = %%d y %%i\n");
	ret_ft = ft_printf("ft : %d %i %d\n", 42, -42, 0);
	ret_pf = printf("pf : %d %i %d\n", 42, -42, 0);
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	printf("Test 7 = INT_MIN / INT_MAX\n");
	ret_ft = ft_printf("ft : %d %d\n", INT_MIN, INT_MAX);
	ret_pf = printf("pf : %d %d\n", INT_MIN, INT_MAX);
	printf("Ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	// 5 %%u 
	printf("Test 8 = %%u\n");
	ret_ft = ft_printf("ft : %u %u\n", 0, UINT_MAX);
	ret_pf = printf("pf : %u %u\n", 0, UINT_MAX);
	printf("Ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	printf("Test 9 = %%u con -1\n");
	ret_ft = ft_printf("ft : %u\n", -1);
	ret_pf = printf("pf : %u\n", -1);
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);
	
	// 6 %%x / %%X 
	printf("Test 10 = %%x / %%X\n");
	ret_ft = ft_printf("ft : %x %X %x\n", 255, 255, 0);
	ret_pf = printf("pf : %x %X %x\n", 255, 255, 0);
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	printf("Test 11 = %%x UINT_MAX\n");
	ret_ft = ft_printf("ft : %x\n", UINT_MAX);
	ret_pf = printf("pf : %x\n", UINT_MAX);
	printf("ret -> ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	// 7 %%p 
	printf("Test 12 = %%p normal\n");
	ret_ft = ft_printf("ft : %p\n", &a);
	ret_pf = printf("pf : %p\n", &a);
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	printf("Test 13 = %%p NULL\n");
	ret_ft = ft_printf("ft : %p\n", NULL);
	ret_pf = printf("pf : %p\n", NULL);
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	// 8 %% percentages 
	printf("Test 14 = %%%% (percentages)\n");
	ret_ft = ft_printf("ft : %% %% %%\n");
	ret_pf = printf("pf : %% %% %%\n");
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	// 9 total mix 
	printf("Test 15 = total mix\n");
	ret_ft = ft_printf(
		"ft : %c %s %d %i %u %x %X %p %%\n",
		'A', str_null, -42, 42, UINT_MAX, 255, 255, &a
	);
	ret_pf = printf(
		"pf : %c %s %d %i %u %x %X %p %%\n",
		'A', str_null, -42, 42, UINT_MAX, 255, 255, &a
	);
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);

	// 10 cese spaces %% %%C 
	printf("Test 16 = %% %%c (spaces )\n");
	ret_ft = ft_printf("ft : %%%% %c\n");
	ret_pf = printf("pf : %%%% %c\n");
	printf("ret = ft: %d | pf: %d\n\n", ret_ft, ret_pf);
	
	return (0);
}*/