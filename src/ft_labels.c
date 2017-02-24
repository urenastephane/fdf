/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_labels.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:36:11 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 18:36:56 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_labels(t_env *e)
{
	mlx_string_put(e->mlx, e->win, 10, 5, 0xFFFFFF, "Press ESC to exit");
	mlx_string_put(e->mlx, e->win, 900 - 10, 5, 0xFF0000, "SELECT VIEW");
	mlx_string_put(e->mlx, e->win, 940 - 10, 25, 0xFFFFFF, "Grid: a");
	mlx_string_put(e->mlx, e->win, 940 - 10, 45, 0xFFFFFF, "Cava: c");
	mlx_string_put(e->mlx, e->win, 940 - 10, 65, 0xFFFFFF, "Isom: i");
	mlx_string_put(e->mlx, e->win, 900 - 10, 85, 0xFF0000, "CAMERA");
	mlx_string_put(e->mlx, e->win, 940 - 10, 105, 0xFFFFFF, "left");
	mlx_string_put(e->mlx, e->win, 940 - 10, 125, 0xFFFFFF, "right");
	mlx_string_put(e->mlx, e->win, 940 - 10, 145, 0xFFFFFF, "up");
	mlx_string_put(e->mlx, e->win, 940 - 10, 165, 0xFFFFFF, "down");
	if ((e->x < 50))
	{
		mlx_string_put(e->mlx, e->win, 900 - 10, 185, 0xFF0000, "ZOOM");
		mlx_string_put(e->mlx, e->win, 940 - 10, 205, 0xFFFFFF, "+");
		mlx_string_put(e->mlx, e->win, 940 - 10, 225, 0xFFFFFF, "-");
		mlx_string_put(e->mlx, e->win, 900 - 10, 245, 0xFF0000, "CHANGE ALT");
		mlx_string_put(e->mlx, e->win, 940 - 10, 265, 0xFFFFFF, "Page up");
		mlx_string_put(e->mlx, e->win, 940 - 10, 285, 0xFFFFFF, "Page down");
	}
}
