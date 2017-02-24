/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 11:58:46 by surena            #+#    #+#             */
/*   Updated: 2016/11/18 19:54:57 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*str;
	size_t				j;

	if (s != NULL)
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		str[len] = '\0';
		j = 0;
		while (j < len)
		{
			str[j] = s[start + j];
			j++;
		}
		return (str);
	}
	return (NULL);
}
