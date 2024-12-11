/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:41:47 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/11 13:59:55 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfchar(char c)
{
	int	i;

	i = 0;
	write (1, &c, 1);
	i++;
	return (i);
}

int	ft_printstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		ft_printfchar(s[i]);
		i++;
	}
	return (i);
}
