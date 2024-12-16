/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:33:25 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/16 11:05:21 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printfchar(char c);
int	ft_printstr(char *s);
int	ft_printnbr(int n);
int	ft_printunnbr(unsigned int n);
int	ft_printhex_low(unsigned long num);
int	ft_printhex_up(unsigned long num);
int	ft_printptr(unsigned long ptr);
int	ft_printf(char const *str, ...);

#endif