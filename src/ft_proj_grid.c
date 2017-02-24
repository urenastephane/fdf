/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proj_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:42:14 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 20:29:09 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void			ft_xseg(t_env *e, int x, int y)
{
	if (x < e->x - 1)
	{
		e->xi = e->pix[y][x].x;
		e->yi = e->pix[y][x].y;
		e->xf = e->pix[y][x + 1].x;
		e->yf = e->pix[y][x + 1].y;
		ft_draw_seg2(e);
	}
}

static void			ft_yseg(t_env *e, int x, int y)
{
	if (y < e->y - 1)
	{
		e->xi = e->pix[y][x].x;
		e->yi = e->pix[y][x].y;
		e->xf = e->pix[y + 1][x].x;
		e->yf = e->pix[y + 1][x].y;
		ft_draw_seg2(e);
	}
}

void				ft_draw(t_env *e)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < e->y)
	{
		while (x < e->x)
		{
			ft_xseg(e, x, y);
			ft_yseg(e, x, y);
			x++;
		}
		y++;
		x = 0;
	}
}

void				ft_proj_grid(t_env *e)
{
	e->current = 'g';
	ft_zoom(e);
	ft_create_image(e);
	ft_find_origin(e);
	ft_tab_to_str(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	ft_labels(e);
}
