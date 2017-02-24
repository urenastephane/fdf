/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 11:13:24 by surena            #+#    #+#             */
/*   Updated: 2016/11/18 22:31:55 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (n == 0 && s1 == NULL)
		return (0);
	while (i < n && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return (int)((unsigned char)*s1 - (unsigned char)*s2);
}
