/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:08:04 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/10 15:28:58 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printnbr(int n)
{
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n == 0)
		return (ft_printchar('0'));
	if (n < 0)
	{
		ft_printchar('-');
		n = -n;
		i++;
	}
	if (n >= 10)
	{
		ft_printnbr(n / 10);
		i++;
	}
	ft_printchar((n % 10) + '0');
	return (i);
}
