/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 11:08:58 by surena            #+#    #+#             */
/*   Updated: 2016/11/19 11:54:49 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (*haystack == '\0' && *needle == '\0')
		return ((char *)haystack);
	if (*haystack != '\0' && *needle == '\0')
		return ((char *)haystack);
	while (haystack[++i] != '\0')
	{
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		j = 0;
	}
	return (NULL);
}
