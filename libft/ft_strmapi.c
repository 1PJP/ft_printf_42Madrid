/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:21:56 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:13:59 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (!s || !f)
		return (NULL);
	ptr = malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*char	aux(unsigned int i, char c)
{
	if (c != ' ')
	{
		if (i % 2 == 0)
			c = c - 32;
		i++;
	}
	return (c);
}
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "hola buenasss";
	char	*func;

	printf("Sin modificar: %s\n", str);
	func = ft_strmapi(str, aux);
	printf("Modificada: %s\n", func);
	free(func);
	return (0);
}*/