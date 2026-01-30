/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:24:40 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:14:25 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int star, size_t len)
{
	unsigned int	i;
	char			*memory;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (star >= i)
		return (ft_strdup(""));
	if (len > i - star)
		len = i - star;
	memory = malloc(sizeof(char) * len + 1);
	if (!memory)
		return (NULL);
	i = 0;
	while (i < len)
	{
		memory[i] = s[star + i];
		i ++;
	}
	memory[i] = '\0';
	return (memory);
}
/*# include <stdio.h>
# include <string.h>
int	main(void)
{
	char	chain[] = "priviet";
	int	subch = 3;
	int	n = sizeof(chain);
	char	*func;

	printf("%s\n", chain);
	func = ft_substr(chain, subch, n);
	printf("%s\n", func);
	free(func);
	return (0);
}*/