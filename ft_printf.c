/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:23:02 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/13 09:27:46 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	select_type(const char type, va_list args)
{
	int	i;

	i = 0;
	if (type == 'c')
		i += ft_printfchar(va_arg(args, int));
	else if (type == 's')
		i += ft_printstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		i += ft_printnbr(va_arg(args, int));
	else if (type == 'u')
		i += ft_printunnbr(va_arg(args, unsigned int));
	else if (type == 'x')
		i += ft_printhex_low(va_arg(args, unsigned int));
	else if (type == 'X')
		i += ft_printhex_up(va_arg(args, unsigned int));
	else if (type == 'p')
		i += ft_printptr(va_arg(args, unsigned long long));
	else if (type == '%')
		i += ft_printfchar('%');
	return (i);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		c;
	va_list	args;

	i = 0;
	c = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			c += ft_printfchar(str[i]);
		else
		{
			i++;
			c += select_type(str[i], args);
		}
		i++;
	}
	va_end(args);
	return (c);
}
