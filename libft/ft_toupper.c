/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:16:06 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:14:34 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c -32;
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	char	Up = 'a';
	int	func;

	printf("%c\n", Up);
	func = ft_toupper(Up);
	printf("%c\n", func);
	return (0);
}*/
