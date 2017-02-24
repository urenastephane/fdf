/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_llintlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 16:04:08 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 20:10:56 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_get_llintlen(long long int n)
{
	int		len;
	int		neg;

	neg = 0;
	len = 0;
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	if (neg)
		len++;
	len++;
	return (len);
}
