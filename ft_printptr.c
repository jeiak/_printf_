/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:26:40 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/12 11:41:42 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		i += ft_printstr("(nil)");
	else
	{
		i = ft_printstr("0x");
		i += ft_printhex_low(ptr);
	}
	return (i);
}
