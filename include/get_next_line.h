/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 19:59:45 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 20:10:01 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100000

typedef struct	s_info
{
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	char			*p;
	int				line;
	int				ret;
}				t_info;

int				get_next_line(const int fd, char **line);

#endif
