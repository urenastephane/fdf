/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:37:10 by surena            #+#    #+#             */
/*   Updated: 2017/02/23 18:54:18 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void				ft_check_char(char c)
{
	if (!ft_isdigit(c) && c != 44 && c != 32 && c != 58 && c != 120 && c != 45)
	{
		ft_putstr("File not valid. Please check characters.\n");
		exit(0);
	}
}

void					ft_store_value(t_env *e)
{
	int					i;
	int					x;

	i = 0;
	x = 0;
	while (e->line[i])
	{
		ft_check_char(e->line[i]);
		while (e->line[i] == ' ')
			i++;
		if ((e->line[i] >= 48 && e->line[i] <= 57)\
				|| e->line[i] == '-' || e->line[i] == '+')
		{
			e->pix[e->j][x].z = ft_atoi(&e->line[i]);
			e->pix[e->j][x].z = -e->pix[e->j][x].z;
			i = i + ft_get_llintlen(ft_atoi(&e->line[i]));
			if (e->line[i] == ',')
				while (e->line[i] != ' ' && e->line[i] != '\0')
					i++;
			x++;
		}
		if (e->line[i] != '\0')
			i++;
	}
}

int						ft_parse(int ac, char **av, t_env *e)
{
	e->j = 0;
	if (!ft_check_error(ac, av, e))
		return (-1);
	while (get_next_line(e->fd, &e->line) > 0)
	{
		ft_store_value(e);
		e->j++;
	}
	if (!ft_close(e->fd))
		return (-1);
	return (0);
}
