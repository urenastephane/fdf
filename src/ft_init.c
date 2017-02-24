/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:29:12 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 18:35:58 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			ft_init(t_env *e)
{
	int		n;

	n = 0;
	e->pass = 0;
	e->limit = 0;
	if (!(e->pix = (t_pix **)malloc(sizeof(t_pix*) * (e->y + 1))))
		return (-1);
	e->pix[e->y] = NULL;
	while (n < e->y)
	{
		if (!(e->pix[n] = (t_pix*)malloc(sizeof(t_pix) * (e->x + 1))))
			return (-1);
		n++;
	}
	return (0);
}
