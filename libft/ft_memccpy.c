/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:43:25 by surena            #+#    #+#             */
/*   Updated: 2016/11/13 22:55:03 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*s_dest;
	unsigned char const		*s_src;

	s_dest = (unsigned char *)dest;
	s_src = (unsigned char const *)src;
	i = 0;
	while (i < n)
	{
		s_dest[i] = s_src[i];
		if (s_src[i] == (unsigned char)c)
			return ((void *)(&s_dest[i + 1]));
		i++;
	}
	return (NULL);
}
