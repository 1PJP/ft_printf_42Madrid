/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:14:22 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/05 21:51:00 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	int	i;
	
	if(!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	char	*c;

	c = "spasiva!!";
	ft_printf_str(c);
	ft_printf_str("\n");
	printf("%s\n", c);
	return (0);
}*/