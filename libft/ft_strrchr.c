/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 23:24:50 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:14:13 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	int				i;

	ch = (unsigned char)c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[] = "priviet";
	int	b = 'v';

	printf("%s\n", a);
	printf("%s\n", ft_strrchr(a, b));
	return (0);
}*/
