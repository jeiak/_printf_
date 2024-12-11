/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:23:02 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/11 13:39:30 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int select_type(const char type, va_list args)
{
	int i;

	i = 0;
	if (type == 'c')
		i = i + ft_printchar(va_arg(args, int));
	else if (type == 's')
		i = i + ft_printstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		i = i + ft_printnbr(va_arg(args, int));
	else if (type == 'u')
		i = i + ft_printunnbr(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'p')
		i = i + ft_printhexlow(va_arg(args, unsigned int));
	else if (type == 'X')
		i = i + ft_printhexup(va_arg(args, unsigned int));
	else if (type == '%')
		i = i + printchar('%');
	return (i);
}

int ft_printf(char const *str, ...)
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
			c = c + ft_printchar(str[i]);
		else
		{
			i++;
			c = c + select_type(str[i], args);
		}
		i++;
	}
	va_end(args);
	return(c);	
}
