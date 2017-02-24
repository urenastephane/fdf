/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 11:14:07 by surena            #+#    #+#             */
/*   Updated: 2016/11/19 11:16:20 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *nptr)
{
	int				negative;
	long long		result;
	char const		*start;

	negative = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\v' || *nptr == '\t'
			|| *nptr == '\r' || *nptr == '\n')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		negative = (*nptr++ == '-') ? -1 : 1;
	start = nptr;
	while (*nptr >= '0' && *nptr <= '9')
		result = ((result * 10) + *nptr++ - '0');
	return ((int)(result * negative));
}
