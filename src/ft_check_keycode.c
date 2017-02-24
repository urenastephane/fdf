/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_keycode.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:06:24 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 20:20:11 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				ft_check_keycode(int keycode, void *a)
{
	t_env		*e;

	e = a;
	if (keycode == 53)
		exit(0);
	if (keycode == 8)
		ft_proj_cav(e);
	if (keycode == 0)
		ft_proj_grid(e);
	if (keycode == 34)
		ft_proj_iso(e);
	if (keycode == 69 || keycode == 78)
		if (e->x < 100)
			ft_refresh_image(e, keycode);
	if (keycode >= 123 && keycode <= 126)
		ft_translate_image(e, keycode);
	if (keycode == 116 || keycode == 121)
		ft_change_alt(e, keycode);
	return (0);
}
