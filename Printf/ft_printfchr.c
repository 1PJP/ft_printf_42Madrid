/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:38:54 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/02 00:01:23 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_printfchr(int c)
{
	write(1, &c, 1);
	return (1);
}
/*int	main(void)
{
	int	ch;
	
	ch = 'a';
	
	ft_printfchr(ch);
	return (0);	
}*/