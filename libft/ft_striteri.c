/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 18:16:48 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:13:36 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	aux(unsigned int j, char *p)
{
	int	i;

	i = 0;
	if (j % 2 == 0 && (p[i] <= 'z' && p[i] >= 'a'))
			p[i] = p[i] - 32;
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "hola buenass ";

	printf("%s\n", str);
	ft_striteri(str, aux);
	printf("%s\n", str);
	return (0);
}*/