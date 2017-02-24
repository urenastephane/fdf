/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:13:06 by surena            #+#    #+#             */
/*   Updated: 2016/11/13 21:12:57 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_reverse(void *dest, const void *src, size_t n)
{
	char					*str_d;
	const char				*str_s;

	str_d = (char *)dest;
	str_s = (char const *)src;
	if (n)
		while (n--)
			str_d[n] = str_s[n];
	return (dest);
}

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		ft_memcpy(dest, src, n);
	else if (dest > src)
		ft_reverse(dest, src, n);
	return (dest);
}
