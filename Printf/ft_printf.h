/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:37:14 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/05 22:22:31 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *format, ...);
int	ft_printf_chr(int c);
int	ft_printf_str(char *s);
int	ft_printf_nbr(int n);
int	ft_printf_unsig( unsigned int n);
int	ft_printf_hexa(unsigned int nbr, char upper);
int	ft_printf_ptr(void *ptr);

#endif