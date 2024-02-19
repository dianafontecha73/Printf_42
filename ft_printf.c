/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:59:15 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/19 20:05:59 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Los especificadores de conversión admitidos incluyen: //
#include "ft_printf.h"

void	ft_format(va_list va, char *cadena, int *counter) //ft_format Puede ser estática?- Según 42.nauman.cc
{
	if( *cadena == 'c')
		ft_putchar(va_arg(va, int), counter);
	else if (*cadena == 's')
		ft_putstr(va_arg(va, char *), counter);
	else if (*cadena == 'p')  // %p puntero es una variable que almacena la dirección de memoria de otra variable
							  // una variable de puntero apunts a un tipo de dato (como int)	
		ft_putptr(va_arg(va, void *), counter);
	else if (*cadena == 'i' || *cadena == 'd')
		ft_putnbr(va_arg(va, int), counter);
	else if (*cadena == 'u')
		ft_putuint(va_arg(va, unsigned int), counter);
	// else if (*cadena == 'x' || *cadena == 'X')
	// {
	// 	if (*cadena == 'x')
	// 		ft_puthex(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
	// 	else
	// 		ft_puthex(va_arg(va, unsigned int), counter, HEX_UP_BASE);
	// }
	else if (*cadena == '%')
		ft_putchar(*cadena, counter);
}

// La función ft_printf itera a través de los caracteres en la cadena de formato de entrada (str). Cuando se encuentra un carácter %, verifica el carácter que sigue a % en busca de un especificador de conversión válido. //

int	ft_printf(char const *cadena, ...)
{ // donde: FORMATO es una cadena qque contiene un texto que se escribir´en la salid estándar.  ARGUMENTOS ADICIONALES (tres punts se llaman elipses) que indica el número variable de argumentos dependiendo del formato de la cadena//
	va_list va; // lista de argumentos variables.
	int	i;
	int length; //para contar el número de caracteres impresos, función principal de printf
	
	i = 0;
	length = 0;
	va_start(va, cadena); // para inicializar con la lista de argumentos
	if(!cadena)
		return(NULL);
	while (cadena[i])
	{
		if(cadena[i] == '%')
		{
			i++;
			ft_format(va, *(cadena + i), &length); //& es un operador de referencia, se utiliza para almacenar la dirección de memoria de la variable y la asigna al puntero
		}
		else
			ft_putchar(cadena[i], &length); // imprimir el caracter recibido e incrementar el valor apuntaddo por counter para mostrar el número toal de caracteres impresos
		i++;
	}
	va_end(va); //para limpiar la lista de caracteres
	return(length); // retorna número total de caracteres
	
}

// #include <unistd.h>
// #include<stdio.h>
// #include<string.h>




// //IMPRIME LA CADENA STR
// //AUMENTAR EL VALOR DE CONTADOR SEGUN LO QUE HAYA IMPRESO
// void  funcioncita(char  *str, int *contador)
// {
//   int   i;
  
//   i = 0;
  
//   while (str[i])
//   {
//       ft_putchar(str[i], contador);
//       i++;
//   }
  
// }


// int main() {
  
//   int contador;
//   char *string;
  
//   //CONTADOR DE CUANTOS BYTES HAZ IMPRESO
//   contador = 0;
//   printf("Valor de contador: %d\n", contador); 
  
//   //LLAMAR A LA FUNCION DE IMPRIMIR
//   string = "Hola\n";
//   funcioncita(string, &contador);
  
//   //VALOR FINAL DE CONTADOR
//   printf("Valor de contador: %d\n", contador); 
//   return 0;
// }