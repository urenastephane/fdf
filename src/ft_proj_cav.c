/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proj_cav.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:41:02 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 18:42:01 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_proj_cav(t_env *e)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	e->current = 'c';
	ft_zoom(e);
	while (y < e->y)
	{
		while (x < e->x)
		{
			e->pix[y][x].x = e->pix[y][x].x + 0.35 * e->pix[y][x].y;
			e->pix[y][x].y = e->pix[y][x].z + 0.35 * e->pix[y][x].y;
			x++;
		}
		y++;
		x = 0;
	}
	ft_create_image(e);
	ft_find_origin(e);
	ft_tab_to_str(e);
	ft_draw(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	ft_labels(e);
}
