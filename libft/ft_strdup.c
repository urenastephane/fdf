/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:03:12 by surena            #+#    #+#             */
/*   Updated: 2016/11/13 22:56:18 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*string;
	size_t			src_size;
	size_t			i;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	string = (char *)malloc(sizeof(char) * (src_size + 1));
	if (string)
	{
		while (i < src_size)
		{
			string[i] = src[i];
			i++;
		}
		string[src_size] = '\0';
	}
	else
		return (NULL);
	return (string);
}
