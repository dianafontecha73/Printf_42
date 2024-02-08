/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:59:15 by dfontech          #+#    #+#             */
/*   Updated: 2024/01/26 15:30:37 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *cadena, ...)
{
	va_list args;
	int i; //puntero
	int j; //string
	
	i = 0;
	j = 0;
	va_start(args, cadena); //cadena es el argumento dónde inicia la lista de argumentos
	while(cadena[i])
	{
		if (cadena[i] == '%' )
		{
			i++;
			
		}
		else
		{
			j += write(1, &cadena[i], 1);
			i++;
		}
	}
	va_end(args);
	return(j); //vuelva al string

}