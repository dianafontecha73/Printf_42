/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:16:18 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/28 19:17:01 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putunsignednbr(int num, int *counter)
{
	if (num >= 0)
	{
		ft_putnbr(num / 10, counter);
	}
	ft_putchar((num % 10) + '0', counter);
}