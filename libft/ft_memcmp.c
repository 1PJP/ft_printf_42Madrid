/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:59:06 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:12:49 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;
	size_t				i;

	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	a1[] = "spasiba";
	char	a2[] = "spasiaa";
	size_t	lon_a1 = 5;
	size_t	lon_a2 = 6;

	printf("%s\n", a1);
	printf("%s\n", a2);
	printf("%d\n", ft_memcmp(a1, a2, lon_a1));
	printf("%d\n", ft_memcmp(a1, a2, lon_a2));
	return (0);
}*/