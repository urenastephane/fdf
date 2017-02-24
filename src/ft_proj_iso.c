/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proj_iso.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:45:57 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 18:47:58 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void			ft_next(t_env *e)
{
	ft_create_image(e);
	ft_find_origin(e);
	ft_tab_to_str(e);
	ft_draw(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	ft_labels(e);
}

void				ft_proj_iso(t_env *e)
{
	int				x;
	int				y;
	static int		tmp;
	static int		tmp2;

	x = 0;
	y = 0;
	e->current = 'i';
	ft_zoom(e);
	while (y < e->y)
	{
		while (x < e->x)
		{
			e->pix[y][x].x = (e->pix[y][x].x - (-e->pix[y][x].y));
			e->pix[y][x].x *= (sqrt(2) / 2);
			tmp = (sqrt(2 / 3) * (-e->pix[y][x].z));
			tmp2 = (1 / sqrt(6)) * (e->pix[y][x].x + (-e->pix[y][x].y));
			e->pix[y][x].y = tmp - tmp2;
			x++;
		}
		y++;
		x = 0;
	}
	ft_next(e);
}
