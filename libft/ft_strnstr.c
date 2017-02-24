/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 11:10:56 by surena            #+#    #+#             */
/*   Updated: 2016/11/18 22:32:22 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char const *big, char const *little, size_t l)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*little != '\0')
	{
		while (i < l && big[i])
		{
			j = 0;
			while (i + j < l && little[j] && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)(uintptr_t)(big + i));
			i++;
		}
		return (NULL);
	}
	else
		return (char *)(uintptr_t)(big);
}
