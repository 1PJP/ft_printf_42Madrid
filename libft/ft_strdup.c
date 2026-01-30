/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:14:00 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:13:31 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	ptr = malloc(i + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "spasiva";
	//char	*func;

	printf("%s\n", str);
	//func = ft_strdup(str);
	//printf("%s\n", func);
	printf("%s\n", (char *)ft_strdup(str));
	free((char *)ft_strdup(str));
	return (0);
}*/