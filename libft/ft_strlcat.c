/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:47:49 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:13:45 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;

	len_d = 0;
	while (dst[len_d] && len_d < size)
		len_d++;
	len_s = 0;
	while (src[len_s])
		len_s++;
	if (len_d == size)
		return (size + len_s);
	i = 0;
	while (src[i] && (len_d + i + 1) < size)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}

/*#include <stdio.h>
int	main(void)
{
	char	d[] = "hola";
	char	s[] = "hola";
	size_t	n = 9;

	printf("%s\n%s\n", d, s);
	printf("%zu\n", ft_strlcat(d, s, n));
	// ft_strlcat(d, s, n);
	printf("%s\n", d);
	return (0);
}*/
