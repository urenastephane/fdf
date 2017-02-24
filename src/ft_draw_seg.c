/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_seg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:20:58 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 20:25:22 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		ft_printwindow(t_env *e)
{
	e->k = (e->xx + ((e->yy) * WIN_WIDTH)) * 4 - 1;
	if (e->k < WIN_SIZE_CHAR && e->k >= 0
			&& (e->xx >= 0 && e->xx < 1024) && (e->yy >= 0 && e->yy < 512))
		return (1);
	return (0);
}

static void		ft_case_two(t_env *e)
{
	if (!(e->dx > e->dy))
	{
		e->cumul = e->dy / 2;
		e->i = 1;
		while (e->i <= e->dy)
		{
			e->yy += e->yinc;
			e->cumul += e->dx;
			if (e->cumul >= e->dy)
			{
				e->cumul -= e->dy;
				e->xx += e->xinc;
			}
			if (ft_printwindow(e))
			{
				e->str[e->k] = 0x00;
				e->str[e->k + 1] = 0x00;
				e->str[e->k + 2] = 0xFF;
				e->str[e->k + 3] = 0x00;
			}
			e->i++;
		}
	}
}

static void		ft_case_one(t_env *e)
{
	if (e->dx > e->dy)
	{
		e->cumul = e->dx / 2;
		e->i = 1;
		while (e->i <= e->dx)
		{
			e->xx += e->xinc;
			e->cumul += e->dy;
			if (e->cumul >= e->dx)
			{
				e->cumul -= e->dx;
				e->yy += e->yinc;
			}
			if (ft_printwindow(e))
			{
				e->str[e->k] = 0x00;
				e->str[e->k + 1] = 0x00;
				e->str[e->k + 2] = 0x00;
				e->str[e->k + 3] = 0xFF;
			}
			e->i++;
		}
	}
}

void			ft_draw_seg2(t_env *e)
{
	e->k = 0;
	e->xx = e->xi;
	e->yy = e->yi;
	e->dx = e->xf - e->xi;
	e->dy = e->yf - e->yi;
	e->xinc = (e->dx > 0) ? 1 : -1;
	e->yinc = (e->dy > 0) ? 1 : -1;
	e->dx = abs(e->dx);
	e->dy = abs(e->dy);
	if (ft_printwindow(e))
	{
		e->str[e->k] = 0x00;
		e->str[e->k + 1] = 0xFF;
		e->str[e->k + 2] = 0x00;
		e->str[e->k + 3] = 0xFF;
	}
	ft_case_one(e);
	ft_case_two(e);
}
