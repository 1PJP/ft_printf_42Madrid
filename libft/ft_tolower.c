/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 22:38:09 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:14:29 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c +32;
	return (c);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	low = 'A';
	int	func;

	printf("%c\n", low);
	func = ft_tolower(low);
	printf("%c\n", func);
	return (0);
}*/
