/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:11:40 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/28 19:44:41 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main (void)
{
/* 	ft_printf("Placeholder d:%d\nPlaceholder c:%c\nPlaceholder s:%s\nPlaceholder x:%x\nPlaceholder p:%p\nPlaceholder u:%u\nPlaceholder porcentaje%%",-42, 'D', "Hola Mundo", 7000, ((char *)NULL), 5142);
	return (0); */
	static int counter;
	char c = 'A';
	char *cadena = "Usamos Printf";
	int len;
	/* len = printf("Esta letra es: %c", c);
	printf("\nLo que mide printf es: %i", len);
	printf("\nAhora la cadena: %s\n", cadena);
	printf("%s\n", "Soy 42");
	printf("El Hexadecimal es: %d\n %x\n", 1234, 5678);
	printf("Hexadecimal en mayúscula %X\n", 1478);
	printf("%%\n");
	printf("Ahora un unsigned %u\n", -12345); */
	
	counter += printf("Esta letra es: %c", c);
	// ft_printf("\nLo que mide printf es: %i", 40); //Corregir
	counter += printf("\nAhora la cadena: %s\n", cadena);
	counter += printf("%s\n", "Soy 42");
	// ft_printf("El Hexadecimal es: %d\n %x\n", 1234, 5678);
	counter += printf("Hexadecimal en mayúscula %X\n", 1478);
	counter += printf("%%\n");
	// ft_printf("Ahora un unsigned %u\n", -1); //Corregir
	printf("%d", counter);
	return (0);

}