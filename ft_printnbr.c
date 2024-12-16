/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:08:04 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/16 09:52:45 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int		i;

	i = 0;
	if (n == -2147483648)
		i += ft_printstr("-2147483648");
	else
	{
		if (n == 0)
			return (ft_printfchar('0'));
		if (n < 0)
		{
			i += ft_printfchar('-');
			n = -n;
		}
		if (n >= 10)
			i += ft_printnbr(n / 10);
		i += ft_printfchar((n % 10) + '0');
	}
	return (i);
}

int	ft_printunnbr(unsigned int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (ft_printfchar('0'));
	if (n >= 10)
		i += ft_printunnbr(n / 10);
	i += ft_printfchar((n % 10) + '0');
	return (i);
}
