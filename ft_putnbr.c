/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:08:25 by bel-kase          #+#    #+#             */
/*   Updated: 2022/11/19 16:15:48 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long nb)
{
	unsigned long int	n;
	int					offset;

	offset = 0;
	if (nb < 0)
	{
		n = -nb ;
		offset += ft_putchar('-');
	}
	else
		n = nb;
	if (n >= 10)
	{
		offset += ft_putnbr((n / 10));
		offset += ft_putnbr((n % 10));
	}
	else
		offset += ft_putchar(n + 48);
	return (offset);
}
