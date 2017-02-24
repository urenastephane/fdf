/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 11:12:07 by surena            #+#    #+#             */
/*   Updated: 2016/11/13 21:26:44 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	int		size_s1_s2;

	size_s1_s2 = 0;
	while ((*s1 || *s2) && size_s1_s2 == 0)
	{
		size_s1_s2 = ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return ((int)size_s1_s2);
}
