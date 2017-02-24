/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:08:41 by surena            #+#    #+#             */
/*   Updated: 2016/11/15 10:48:06 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int		start;
	size_t				size_s;
	size_t				end;

	start = 0;
	end = 0;
	if (s == NULL)
		return (NULL);
	size_s = ft_strlen(s);
	while (s[start] && ft_isspace(s[start]))
		++start;
	if (start == size_s)
		return (ft_strnew(0));
	while (ft_isspace(s[size_s - end - 1]))
		++end;
	return (ft_strsub(s, start, size_s - end - start));
}
