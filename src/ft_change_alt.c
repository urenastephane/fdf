/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_alt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:03:40 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 20:19:25 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void			ft_alt_plus(t_env *e)
{
	int				x;
	int				y;

	x = 0						;
	y = 0;
	while (y < e->y)
	{
		while (x < e->x)
		{
			if (e->pix[y][x].z != 0)
				e->pix[y][x].z += 23;
			x++;
		}
		y++;
		x = 0;
	}
}

static void			ft_alt_minus(t_env *e)
{
	int				x;
	int				y;

	x = 0;
	y = 0;
	while (y < e->y)
	{
		while (x < e->x)
		{
			if (e->pix[y][x].z != 0)
				e->pix[y][x].z -= 23;
			x++;
		}
		y++;
		x = 0;
	}
}

void				ft_change_alt(t_env *e, int keycode)
{
	if (!(e->x > 20))
	{
		if (keycode == 116)
			ft_alt_minus(e);
		if (keycode == 121)
			ft_alt_plus(e);
		if (e->current == 'g')
			ft_proj_grid(e);
		if (e->current == 'c')
			ft_proj_cav(e);
		if (e->current == 'i')
			ft_proj_iso(e);
	}
}
