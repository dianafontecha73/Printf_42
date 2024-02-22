/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:32:03 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/22 18:41:14 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//Se crea la función recursiva que convierte la representación de entero largo sin signo de la dirección de memoria en una cadena hexadecimal, carácter por carácter, y la imprime en la salida estándar.
static int	rec_print(unsigned long n, const char *base)
{
	int	len;
	
	len =0;
	
}


//La función de puntero está diseñada para convertir e imprimir una dirección de memoria (puntero vacío) en formato hexadecimal a la salida estándar (stdout)
int	ft_putptr(void *forma)
{
	unsigned long	n; //Esta variable se debe a que el resultado sale en formato hexadecimal
	const char		*base;
	int				len;
	
	n = (unsigned long)forma;
	base = "0123456789abcdef";
	len = ft_putstr("0x");
	len += rec_print(n, base);
	return(len);
}