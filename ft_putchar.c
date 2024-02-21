/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:45:31 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/21 17:31:02 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

 int ft_putchar(char c)
 {
	return (write(1, &c, 1));
 }
/*
int main (void)
{
	char c = 'A';
	char *cadena = "Usamos Printf";
	int len;
	len = printf("Esta letra es: %c", c);
	printf("%d\n", ft_putchar(c));
	return (0);
}
*/