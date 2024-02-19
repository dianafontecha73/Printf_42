/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:21:37 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/19 20:06:57 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *counter)
{
	int	i;

	i = 0;
	if(!s)
		return(NULL);
	while (s[i] != '\0')
	{
		ft_putchar(*s, counter);
		i++;
	}
}