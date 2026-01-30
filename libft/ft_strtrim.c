/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:57:31 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:14:20 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		i_s;

	if (!s1)
		return (NULL);
	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_strchr(set, s1[i]))
		i--;
	j = 0;
	while (s1[j] && ft_strchr(set, s1[j]))
		j++;
	if (i < j)
		i = j - 1;
	s2 = malloc(sizeof(char) * ((i - j + 2)));
	if (!s2)
		return (NULL);
	i_s = 0;
	while (s1[j] && j <= i)
		s2[i_s++] = s1[j++];
	s2[i_s] = '\0';
	return (s2);
}
/*int	main(void)
{
	char	s[] = "abccaholaabbc";
	char	set[] = "cba";
	char	*func;

	printf("%s\n%s\n", s, set);
	func = ft_strtrim(s, set);
	printf("%s\n", func);
	free(func);
	return(0);
}*/
