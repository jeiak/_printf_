/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:23:02 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/10 13:44:43 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *str, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, str)
	while (str[i] != '%')
	{
			
	}


	
}