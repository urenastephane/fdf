/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:36:55 by surena            #+#    #+#             */
/*   Updated: 2016/11/13 22:11:37 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t		size;
	size_t		i;
	char		temporary;

	i = 0;
	size = ft_strlen(s);
	while (i < --size)
	{
		temporary = s[size];
		s[size] = s[i];
		s[i] = temporary;
		i++;
	}
	return (s);
}
