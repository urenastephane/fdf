/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate_image.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:55:26 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 18:57:37 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_go_left(t_env *e)
{
	int			x;
	int			y;

	x = 0;
	y = 0						;
	while (y < e->y)
	{
		while (x < e->x)
		{
			e->pix[y][x].x -= 20;
			x++;
		}
		y++;
		x = 0;
	}
}

void			ft_go_right(t_env *e)
{
	int			x;
	int			y;

	x = 0;
	y = 0;
	while (y < e->y)
	{
		while (x < e->x)
		{
			e->pix[y][x].x += 20;
			x++;
		}
		y++;
		x = 0;
	}
}

void			ft_go_down(t_env *e)
{
	int			x;
	int			y;

	x = 0;
	y = 0;
	while (y < e->y)
	{
		while (x < e->x)
		{
			e->pix[y][x].y += 20;
			x++;
		}
		y++;
		x = 0;
	}
}

void			ft_go_up(t_env *e)
{
	int			x;
	int			y;

	x = 0;
	y = 0;
	while (y < e->y)
	{
		while (x < e->x)
		{
			e->pix[y][x].y -= 20;
			x++;
		}
		y++;
		x = 0;
	}
}

void			ft_translate_image(t_env *e, int keycode)
{
	int			x;
	int			y;

	x = 0;
	y = 0;
	if (keycode == 123)
		ft_go_left(e);
	if (keycode == 124)
		ft_go_right(e);
	if (keycode == 126)
		ft_go_up(e);
	if (keycode == 125)
		ft_go_down(e);
	ft_create_image(e);
	ft_tab_to_str(e);
	if (e->current != 'g')
		ft_draw(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	ft_labels(e);
}
