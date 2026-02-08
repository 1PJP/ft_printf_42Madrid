/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:38:54 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/08 15:05:43 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_chr(int c)
{
	write(1, &c, 1);
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	char	ch;
	
	ch = 'J';
	
	ft_printf_chr(ch);
	ft_printf_chr('\n');
	printf("%c\n", ch);
	return (0);	
}*/