/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:14:22 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/04 18:27:26 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

int	ft_printstr(char *s)
{
	int	i;
	
	if(!s)
		return (ft_printstr("(null)"));
	i = 0;
	while (s[i])
		{
			write(1, &s, 1);
			i++;
		}
	return (i);
}
/*int	main(void)
{
	int	str;

	str = 'spasiva';
	
	ft_printstr(str);
	return (0);
}*/