/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:21:16 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:13:48 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
#include <stdio.h>
int	main(void)
{
	char	des[] = "";
	char	ss[] = "spasiva";
	int	len = 8;
	char	func;
	
	printf("%s\n", ss);
	func = ft_strlcpy(des, ss, len);
	printf("%c\n", func);
	printf("%d\n", func);
	return (0);
}*/
