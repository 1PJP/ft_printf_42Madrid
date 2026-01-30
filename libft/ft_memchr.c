/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:52:25 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/17 02:23:00 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ch;
	unsigned char		i_c;
	size_t				i;

	ch = (const unsigned char *)s;
	i_c = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (ch[i] == i_c)
			return ((void *)&ch[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "spasiva";
	int	s2 = 'i';
	size_t	n;
	n = sizeof(s1);

	printf("%s\n", s1);
	printf("%p\n", ft_memchr(s1, s2, n));
	return (0);
}*/
