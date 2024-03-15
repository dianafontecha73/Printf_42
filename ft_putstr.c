/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:21:37 by dfontech          #+#    #+#             */
/*   Updated: 2024/03/13 19:07:52 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *counter)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar(s[i], counter);
		i++;
	}
}
