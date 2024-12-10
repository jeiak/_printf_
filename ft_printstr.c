/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:41:47 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/10 15:00:28 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printfchar(char c)
{
	write (1, &c, 1);
	return (1);
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
		ft_printchar(s[i]);
		i++;
	}
	return (i);
}
