/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:01:23 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:13:41 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	i1 = 0;
	i2 = 0;
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s1[i1])
	{
		s3[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
	{
		s3[i1 + i2] = s2[i2];
		i2++;
	}
	s3[i1 + i2] = '\0';
	return (s3);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "hola ";
	char	str2[] = "mundo nuevo";
	char	*func;

	printf("%s\n%s\n", str1, str2);
	func = ft_strjoin(str1, str2);
	printf("%s\n", func);
	free(func);
	return (0);
}*/