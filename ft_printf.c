/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:59:15 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/22 18:39:55 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Los especificadores de conversión admitidos incluyen: //
#include "ft_printf.h"

int	ft_format(va_list va, const char *cadena) //ft_format Puede ser estática?- Según 42.nauman.cc
{
	int len;
	
	len = 0;
	if( *cadena == 'c')
		len = ft_putchar(va_arg(va, int));
	else if (*cadena == 's')
		len = ft_putstr(va_arg(va, char *));
	else if (*cadena == 'p')  // %p puntero es una variable que almacena la dirección de memoria de otra variable
							  // una variable de puntero apunts a un tipo de dato (como int)	
		len = ft_putptr(va_arg(va, void *));
	else if (*cadena == 'i' || *cadena == 'd')
		len = ft_putnbr(va_arg(va, int));
	else if (*cadena == 'u')
		len = ft_putuint(va_arg(va, unsigned int));
	else if (*cadena == 'x' || *cadena == 'X')
	{
		if (*cadena == 'x')
	 		len = ft_puthex(va_arg(va, unsigned int), "0123456789abcdef");
		else
			len = ft_puthex(va_arg(va, unsigned int), "0123456789ABCDEF");
	}
	else if (*cadena == '%')
		len = ft_putchar(*cadena);
	return (len);
}

// La función ft_printf itera a través de los caracteres en la cadena de formato de entrada (str). Cuando se encuentra un carácter %, verifica el carácter que sigue a % en busca de un especificador de conversión válido. //

int	ft_printf(const char *cadena, ...)
{ // donde: FORMATO es una cadena qque contiene un texto que se escribir´en la salid estándar.  ARGUMENTOS ADICIONALES (tres punts se llaman elipses) que indica el número variable de argumentos dependiendo del formato de la cadena//
	va_list va; // lista de argumentos variables.
	int	i;
	int len; //para contar el número de caracteres impresos, función principal de printf
	
	i = 0;
	len = 0;
	va_start(va, cadena); // para inicializar con la lista de argumentos
	if(!cadena)
		return (0);
	while (cadena[i])
	{
		if(cadena[i] == '%')
		{
			i++;
			len += ft_format(va, &cadena[i]); //& es un operador de referencia, se utiliza para almacenar la dirección de memoria de la variable y la asigna al puntero
		}
		else
			len += ft_putchar(cadena[i]); // imprimir el caracter recibido e incrementar el valor apuntaddo por counter para mostrar el número toal de caracteres impresos
		i++;
	}
	va_end(va); //para limpiar la lista de caracteres
	return(len); // retorna número total de caracteres	
}