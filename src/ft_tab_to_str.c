/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:51:51 by surena            #+#    #+#             */
/*   Updated: 2017/02/23 18:47:16 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void			ft_change_color(t_env *e, int x, int y, int i)
{
	if (e->pix[y][x].z < -1 && e->pix[y][x].z >= -10)
	{
		e->str[i] = 0x00;
		e->str[i + 1] = 0x00;
		e->str[i + 2] = 0x00;
		e->str[i + 3] = 0xFF;
	}
	else if (e->pix[y][x].z >= -1 && e->pix[y][x].z <= 1)
	{
		e->str[i] = 0x00;
		e->str[i + 1] = 0x00;
		e->str[i + 2] = 0xFF;
		e->str[i + 3] = 0xFF;
	}
}

static void			ft_change_color2(t_env *e, int x, int y, int i)
{
	if (e->pix[y][x].z < -10)
	{
		e->str[i] = 0x00;
		e->str[i + 1] = 0xFF;
		e->str[i + 2] = 0x00;
		e->str[i + 3] = 0xFF;
	}
	else if (e->pix[y][x].z > 1)
	{
		e->str[i] = 0x00;
		e->str[i + 1] = 0xFF;
		e->str[i + 2] = 0xFF;
		e->str[i + 3] = 0x00;
	}
}

static void			ft_fill(t_env *e, int x, int y, int i)
{
	i = (((e->pix[y][x].x) + (e->pix[y][x].y + 1) * WIN_WIDTH)) * 4 - 4;
	if (i < WIN_SIZE_CHAR && i >= 0 && (e->pix[y][x].x >= 0
				&& e->pix[y][x].x < 1024)
			&& (e->pix[y][x].y >= 0 && e->pix[y][x].y < 512))
	{
		ft_change_color(e, x, y, i);
		ft_change_color2(e, x, y, i);
	}
}

void				ft_tab_to_str(t_env *e)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	if (!(e->str = mlx_get_data_addr(e->img, &e->bpp, &e->size_line, &e->endi)))
		exit(0);
	while (y < e->y)
	{
		while (x < e->x)
		{
			ft_fill(e, x, y, i);
			x++;
		}
		y++;
		x = 0;
	}
}
