/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:04:01 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/11 15:00:06 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> // Para usar printf y compararlo con ft_printf

int	main(void)
{
	int	ret1, ret2;

	// Prueba con caracteres
	ret1 = ft_printf("Mi ft_printf: Caracter: %c\n", 'A');
	ret2 = printf("Origi printf: Caracter: %c\n", 'A');
	printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

	// Prueba con cadenas
	ret1 = ft_printf("Mi ft_printf: Cadena: %s\n", "Hola mundo");
	ret2 = printf("Origi printf: Cadena: %s\n", "Hola mundo");
	printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

	// Prueba con enteros
	ret1 = ft_printf("Mi ft_printf: Entero: %d\n", 42);
	ret2 = printf("Origi printf: Entero: %d\n", 42);
	printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

	// Prueba con enteros sin signo
	ret1 = ft_printf("Mi ft_printf: Entero sin signo: %u\n", 4294967295U);
	ret2 = printf("Origi printf: Entero sin signo: %u\n", 4294967295U);
	printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

	// Prueba con hexadecimales
	ret1 = ft_printf("Mi ft_printf: Hexadecimal minúsculas: %x\n", 250);
	ret2 = printf("Origi printf: Hexadecimal minúsculas: %x\n", 250);
	printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

	ret1 = ft_printf("Mi ft_printf: Hexadecimal mayúsculas: %X\n", 255);
	ret2 = printf("Origi printf: Hexadecimal mayúsculas: %X\n", 255);
	printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

	// Prueba con punteros
	int	x = 42;
	ret1 = ft_printf("Mi ft_printf: Puntero: %p\n", &x);
	ret2 = printf("Origi printf: Puntero: %p\n", &x);
	printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

	// Prueba con porcentaje
	ret1 = ft_printf("Mi ft_printf: Porcentaje: %%\n");
	ret2 = printf("Origi printf: Porcentaje: %%\n");
	printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

	return (0);
}
// gcc -o ft_printf_test main.c -L. -lftprintf  //
