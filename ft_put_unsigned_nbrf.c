/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbrf.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abendrih <abendrih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:10:43 by abendrih          #+#    #+#             */
/*   Updated: 2025/05/27 16:47:17 by abendrih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbrf(int n)
{
	unsigned int	nb;
	int				count;

	count = 0;
	nb = n;
	if (nb >= 10)
	{
		count += ft_put_unsigned_nbrf(nb / 10);
	}
	count += ft_putcharf(nb % 10 + '0');
	return (count);
}
