/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:46:23 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:12:55 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*des;
	const unsigned char	*sr;
	size_t				i;

	if (!dest && !src)
		return (dest);
	des = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "ca va";
	char	src[] = "bien!";

	ft_memcpy(dest, src, 5);
	printf("%s\n", (char *)ft_memcpy(dest, src, 5));
	printf("%s\n", (char *)memcpy(dest, src, 5));
	return (0);
}*/
