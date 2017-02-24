/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 11:27:12 by surena            #+#    #+#             */
/*   Updated: 2016/11/12 17:39:28 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*temporary;

	while (*alst != NULL)
	{
		temporary = *alst;
		(*alst) = (*alst)->next;
		(*del)(temporary->content, temporary->content_size);
		free(temporary);
	}
	*alst = NULL;
}
