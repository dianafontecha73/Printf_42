/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:11:40 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/08 17:26:42 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main (void)
{
	char c = '0123456789';
	char *cadena = "Usamos Printf";
	int len;
	len = printf("Esta letra es: %c", c);
	printf("\nLo que mide printf es: %i", len);
	printf("\nAhora la cadena: %s\n", cadena);
	printf("%s\n", "Soy 42");
	printf("El Hexadecimal es: %d\n %x\n", 1234, 5678);
	printf("Hexadecimal en mayúscula %X\n", 1478);
	printf("%%\n");
	printf("Ahora un unsigned %u\n", -12345);
	
	return (0);

}