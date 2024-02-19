/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:45:31 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/19 20:06:20 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void  ft_putchar(char c, int *counter)
{
	write(1, &c, 1);
	*counter = *counter + 1;
}
/*
int main (void)
{
	char c = '0123456789';
	char *cadena = "Usamos Printf";
	int len;
	len = printf("Esta letra es: %c", c);
	
	return (0);
}
*/