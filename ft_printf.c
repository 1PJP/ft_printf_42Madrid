/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:38:54 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 19:30:22 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_printf(char const *c)
{
	write(1, c, 1);
	return (0);
}
int	main(void)
{
	char const	*ch;
	
	ch = "a";
	
	ft_printf(&ch);
	return (0);	
}