/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 19:21:09 by surena            #+#    #+#             */
/*   Updated: 2017/02/24 15:10:02 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				ft_check_error(int ac, char **av, t_env *e)
{
	if (ac != 2)
	{
		ft_putstr("Usage: ./fdf <file>\n");
		return (0);
	}
	e->fd = open(av[1], O_RDONLY);
	if (e->fd != 3)
	{
		ft_putstr("open failed.\n");
		return (0);
	}
	return (1);
}

int				main(int ac, char **av)
{
	t_env *e;

	e = NULL;
	if (!(e = (t_env*)malloc(sizeof(t_env))))
		return (-1);
	if (ft_size_grid(ac, av, e) == -1)
		return (-1);
	if (ft_init(e) == -1)
		return (-1);
	if (ft_parse(ac, av, e) == -1)
		return (-1);
	if (e->x > 30 && e->x < 100)
		e->zoom = 8;
	else if (e->x >= 100 && e->x < 300)
		e->zoom = 4;
	else if (e->x >= 300)
		e->zoom = 1;
	else
		e->zoom = 20;
	ft_create_window(e);
	mlx_key_hook(e->win, ft_check_keycode, e);
	mlx_loop(e->mlx);
	return (0);
}
