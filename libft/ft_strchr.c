/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 11:19:28 by surena            #+#    #+#             */
/*   Updated: 2016/11/13 22:53:32 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t				i;
	char const			*s1;

	i = 0;
	s1 = (char const *)s;
	while (i < ft_strlen(s) + 1)
	{
		if (*s1 == (char)c)
			return ((char *)s1);
		s1++;
		i++;
	}
	return (NULL);
}
