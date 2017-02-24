/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:50:18 by surena            #+#    #+#             */
/*   Updated: 2017/02/24 15:08:32 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			count_value(t_env *e)
{
	int			i;
	int			a;

	i = 0;
	a = 0;
	while (e->line[i] != 0)
	{
		if ((e->line[i] >= 48 && e->line[i] <= 57)\
				|| e->line[i] == '-' || e->line[i] == '+')
		{
			a = ft_atoi(&e->line[i]);
			if (e->y == 0)
			{
				e->x += 1;
			}
			i = i + ft_get_llintlen(a);
			if (e->line[i] == ',')
			{
				while (e->line[i] != ' ' && e->line[i] != '\0')
					i++;
			}
		}
		i++;
	}
}

int				ft_size_grid(int ac, char **av, t_env *e)
{
	e->y = 0;
	e->x = 0;
	if (!ft_check_error(ac, av, e))
		return (-1);
	while (get_next_line(e->fd, &e->line))
	{
		if (!*e->line)
		{
			ft_putendl_fd("File not valid. Please check characters.", 2);
			return (-1);
		}
		count_value(e);
		e->y++;
	}
	if (!ft_close(e->fd))
		return (-1);
	e->nb = e->x * e->y;
	return (0);
}
