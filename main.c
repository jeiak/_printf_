/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesssanc <jesssanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:04:01 by jesssanc          #+#    #+#             */
/*   Updated: 2024/12/13 09:26:00 by jesssanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int ret1, ret2;

    // Casos normales
    int a = 100;
    char *str = "Hello, World!";
    ret1 = ft_printf("Mi ft_printf: Caracter: %c, String: %s, Entero: %d, Hexadecimal: %x\n", 'A', str, a, a);
    ret2 = printf("Origi printf: Caracter: %c, String: %s, Entero: %d, Hexadecimal: %x\n", 'A', str, a, a);
    printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

    // Casos con punteros
    ret1 = ft_printf("Mi ft_printf: Puntero: %p\n", &a);
    ret2 = printf("Origi printf: Puntero: %p\n", &a);
    printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

    // Puntero nulo
    ret1 = ft_printf("Mi ft_printf: Puntero nulo: %p\n", NULL);
    ret2 = printf("Origi printf: Puntero nulo: %p\n", NULL);
    printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

    // Casos con valores negativos y cero
    ret1 = ft_printf("Mi ft_printf: Entero negativo: %d, Positivo: %d\n", -2147483648, 2147483647);
    ret2 = printf("Origi printf: Entero negativo: %d, Positivo: %d\n", -2147483648, 2147483647);
    printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

    // Casos de errores en cadenas de formato
    ret1 = ft_printf("Mi ft_printf: Formato incorrecto: %z\n");  // %z no es un especificador válido
    ret2 = printf("Origi printf: Formato incorrecto: %z\n");
    printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

    // Prueba con valores extremos
    unsigned int big_number = 4294967295;  // 4,294,967,295
    ret1 = ft_printf("Mi ft_printf: Número grande: %u\n", big_number);
    ret2 = printf("Origi printf: Número grande: %u\n", big_number);
    printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

    // Casos con % no seguido de especificador
    ret1 = ft_printf("Mi ft_printf: Porcentaje: %%\n");
    ret2 = printf("Origi printf: Porcentaje: %%\n");
    printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

    // Cadena vacía
    ret1 = ft_printf("Mi ft_printf: Cadena vacía: %s\n", "");
    ret2 = printf("Origi printf: Cadena vacía: %s\n", "");
    printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

    // Caracter nulo
    ret1 = ft_printf("Mi ft_printf: Caracter nulo: %c\n", '\0');
    ret2 = printf("Origi printf: Caracter nulo: %c\n", '\0');
    printf("ft_printf devolvió: %d, printf devolvió: %d\n", ret1, ret2);

    return 0;
}
// gcc -o ft_printf_test main.c -L. -lftprintf  //
