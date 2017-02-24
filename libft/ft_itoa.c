/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:01:58 by surena            #+#    #+#             */
/*   Updated: 2016/11/18 21:53:38 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numberlength(unsigned int n)
{
	size_t	i;

	i = 0;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			i;
	size_t			m;
	size_t			sign;
	unsigned int	abs_n;

	i = 0;
	str = NULL;
	abs_n = (n < 0) ? (unsigned int)-n : (unsigned int)n;
	sign = (n < 0) ? 1 : 0;
	m = ft_numberlength(abs_n) + sign;
	if (!(str = (char *)malloc(sizeof(char) * (m + 1))))
		return (NULL);
	while (abs_n > 9)
	{
		str[m - i++ - 1] = (abs_n % 10) + 48;
		abs_n = abs_n / 10;
	}
	str[sign] = (char)abs_n + 48;
	if (sign == 1)
		str[0] = '-';
	str[m] = '\0';
	return (str);
}
