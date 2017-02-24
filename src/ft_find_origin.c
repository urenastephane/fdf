/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_origin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:25:22 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 20:27:34 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void			ft_find_y(t_env *e)
{
	int				x;
	int				y;
	int				min;
	int				max;

	x = 0;
	y = 0;
	min = 0;
	max = 0;
	e->hight = 0;
	while (y < e->y)
	{
		while (x < e->x)
		{
			if (e->pix[y][x].y < min)
				min = e->pix[y][x].y;
			if (e->pix[y][x].y > max)
				max = e->pix[y][x].y;
			x++;
		}
		y++;
		x = 0;
	}
	while (max > min++)
		e->hight++;
}

static void			ft_find_x(t_env *e)
{
	int				x;
	int				y;
	int				min;
	int				max;

	x = 0;
	y = 0;
	min = 0;
	max = 0;
	e->width = 0;
	while (y < e->y)
	{
		while (x < e->x)
		{
			if (e->pix[y][x].x < min)
				min = e->pix[y][x].x;
			if (e->pix[y][x].x > max)
				max = e->pix[y][x].x;
			x++;
		}
		y++;
		x = 0;
	}
	while (max > min++)
		e->width++;
}

void				ft_middle(t_env *e)
{
	int				x;
	int				y;

	x = 0;
	y = 0;
	while (y < e->y)
	{
		while (x < e->x)
		{
			e->pix[y][x].x += (WIN_WIDTH - e->width) / 2;
			e->pix[y][x].y += (WIN_HIGHT - e->hight) / 2;
			x++;
		}
		y++;
		x = 0;
	}
}

void				ft_find_origin(t_env *e)
{
	e->pass = 1;
	ft_find_x(e);
	ft_find_y(e);
	ft_middle(e);
}
