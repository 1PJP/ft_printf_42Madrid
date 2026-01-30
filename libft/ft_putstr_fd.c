/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 19:08:35 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:13:17 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "hola buenass";
	char	jump[] = "\n";

	printf("%s\n", str);
	ft_putstr_fd(str, 1);
	ft_putstr_fd(jump, 1);
	return (0);
}*/