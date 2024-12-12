/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:21:23 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/12 10:02:43 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex_low(unsigned long num)
{
	char	result[16];
	int		i;
	int		count;

	if (num == 0)
	{
		ft_printfchar('0');
		return (1);
	}
	i = 0;
	while (num > 0)
	{
		result[i] = ("0123456789abcdef"[num % 16]);
		num = num / 16;
		i++;
	}
	count = i;
	i--;
	while (i >= 0)
	{
		ft_printfchar(result[i]);
		i--;
	}
	return (count);
}

int	ft_printhex_up(unsigned long num)
{
	char	result[16];
	int		i;
	int		count;

	if (num == 0)
	{
		ft_printfchar('0');
		return (1);
	}
	i = 0;
	while (num > 0)
	{
		result[i] = ("0123456789ABCDEF"[num % 16]);
		num = num / 16;
		i++;
	}
	count = i;
	i--;
	while (i >= 0)
	{
		ft_printfchar(result[i]);
		i--;
	}
	return (count);
}
