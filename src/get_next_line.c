/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 19:09:17 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 19:11:39 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int			ft_sheep_dog(t_info *info, char **line, char **s)
{
	char			*p;
	char			*t;

	t = *line;
	if ((p = ft_strchr(*s, '\n')) == NULL)
	{
		*line = ft_strjoin(*line, *s);
		free(t);
		t = NULL;
		*s = NULL;
		return (0);
	}
	*p++ = '\0';
	*line = ft_strjoin(*line, *s);
	free(t);
	t = NULL;
	info->tmp = p;
	p = NULL;
	info->line += 1;
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	static t_info	info;
	char			*b;

	if (line == NULL || fd == -1 || BUFF_SIZE <= 0)
		return (-1);
	if ((*line = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))) == NULL)
		return (-1);
	ft_bzero(*line, BUFF_SIZE);
	if ((info.tmp) != NULL)
		if (ft_sheep_dog(&info, line, (char **)&(info.tmp)))
			return (1);
	while ((info.ret = read(fd, info.buf, BUFF_SIZE)) > 0)
	{
		info.buf[info.ret] = '\0';
		b = info.buf;
		if (ft_sheep_dog(&info, line, &b))
			return (1);
	}
	if ((info.ret == 0) && (ft_strlen(*line) != 0))
		return (1);
	return (info.ret);
}
