/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 11:18:15 by surena            #+#    #+#             */
/*   Updated: 2016/11/13 11:18:39 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		if (n == -2147483648)
		{
			write(1, "2", 1);
			n = 147483648;
		}
		else
			n = (-n);
	}
	if (n > 9)
		ft_putnbr((n / 10));
	ft_putchar((n % 10) + '0');
}