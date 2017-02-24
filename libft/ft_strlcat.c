/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 11:56:25 by surena            #+#    #+#             */
/*   Updated: 2016/11/19 11:02:59 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t		dest_size;
	size_t		src_size;

	dest_size = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	if (size == 0 && !dest)
		return (src_size);
	while (*dest)
	{
		dest_size++;
		dest++;
	}
	if (size <= dest_size)
		return (size + src_size);
	else
	{
		while (*src && size-- - dest_size - 1)
			*dest++ = *src++;
		*dest = 0;
		return (dest_size + src_size);
	}
}
