/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refresh_image.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:48:26 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 18:49:59 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_refresh_image(t_env *e, int keycode)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (keycode == 69)
		e->zoom += 5;
	else if (keycode == 78)
		e->zoom -= 5;
	if (e->current == 'g')
		ft_proj_grid(e);
	if (e->current == 'c')
		ft_proj_cav(e);
	if (e->current == 'i')
		ft_proj_iso(e);
}
