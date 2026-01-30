/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 19:36:32 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:13:13 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	ch;
	char		tr;

	ch = n;
	if (ch < 0)
	{
		write(fd, "-", 1);
		ch = -ch;
	}
	if (ch >= 10)
		ft_putnbr_fd((ch / 10), fd);
	tr = (ch % 10) + '0';
	write(fd, &tr, 1);
}
/*int	main(void)
{
	write(1, "int_min", 7);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	
	write(1, "int_max", 7);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	return (0);
}*/