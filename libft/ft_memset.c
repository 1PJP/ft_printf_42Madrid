/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:16:48 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:13:00 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c ;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[] = "ca va";

	ft_memset(s, 'j', 2);

	printf("%s", s);
	return (0);
}*/
