/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 11:30:53 by surena            #+#    #+#             */
/*   Updated: 2016/11/19 11:53:59 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*temporary;

	temporary = NULL;
	if (lst && f)
	{
		new = f(lst);
		temporary = new;
		while (lst->next)
		{
			new->next = f(lst->next);
			new = new->next;
			lst = lst->next;
		}
	}
	return (temporary);
}
