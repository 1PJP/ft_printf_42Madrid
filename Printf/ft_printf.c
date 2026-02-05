/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 23:44:05 by jezambra          #+#    #+#             */
/*   Updated: 2026/02/05 22:31:17 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	types(char t, va_list arg)
{
	int	i;

	i = 0;
	if (t == 'c')
		i = ft_printf_chr(va_arg(arg, int));
	else if (t == '%')
		i = ft_printf_chr('%');
	else if (t == 's')
		i = ft_printf_str(va_arg(arg, char *));
	else if (t == 'd' || t == 'i')
		i = ft_printf_nbr(va_arg(arg, int));
	else if (t == 'u')
		i = ft_printf_unsig(va_arg(arg, unsigned int));
	//else if (s == 'X')
	//	i = ft_printf_hexa(va_arg(arg, unsigned int), s);
	else if (t == 'x' || t == 'X')
		i = ft_printf_hexa(va_arg(arg, unsigned int), t);
	else if (t == 'p')
		i = ft_printf_ptr(va_arg(arg, void *));
	return (i);
}

int	ft_printf(char const *format, ...)
{
	va_list	arg;
	int		i;
	int		count;
	int		ctrl;

	if (!format)
		return (-1);
	va_start(arg, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] != '%')
			count = count + write(1, &format[i], 1);
		else
		{
			ctrl = types(format[++i], arg);
			if (ctrl == -1)
			{
				va_end (arg);
				return (-1);
			}
			count = count + ctrl;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
