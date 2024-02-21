/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:21:37 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/21 16:25:37 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int *counter)
{
	int	i;

	i = 0;
	if(!s)
		return(0);
	while (s[i] != '\0')
	{
		ft_putchar(s);
		i++;
	}
	return(ft_strlen(s));
}
/*
int main(void)
{
	int i;
	int counter;
	
	i= ft_putstr("HOLA", &counter);
	return (0);
}
*/