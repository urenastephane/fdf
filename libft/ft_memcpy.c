/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:31:38 by surena            #+#    #+#             */
/*   Updated: 2016/11/13 21:12:25 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char					*str_d;
	const char				*str_s;

	str_d = (char *)dest;
	str_s = (char const *)src;
	if (n)
		while (n > 0)
		{
			*str_d++ = *str_s++;
			--n;
		}
	return (dest);
}
