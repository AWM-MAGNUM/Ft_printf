/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:08:29 by bel-kase          #+#    #+#             */
/*   Updated: 2022/11/18 22:22:46 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int				offset;
	size_t			i;

	i = 0;
	offset = 0;
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		offset += ft_putchar(str[i]);
		i++;
	}
	return (offset);
}
