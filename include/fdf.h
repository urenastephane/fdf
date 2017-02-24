/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surena <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 19:50:18 by surena            #+#    #+#             */
/*   Updated: 2017/02/22 19:59:14 by surena           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "mlx.h"
# include "libft.h"
# include "get_next_line.h"
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>

# define WIN_WIDTH 1024
# define WIN_HIGHT 512
# define WIN_SIZE_CHAR WIN_WIDTH * WIN_HIGHT * 4

typedef struct	s_pix
{
	unsigned int	color;
	int				x;
	int				y;
	int				z;
}				t_pix;

typedef struct	s_env
{
	int				limit;
	int				i;
	int				xx;
	int				yy;
	int				k;
	int				xi;
	int				xf;
	int				yi;
	int				yf;
	int				dx;
	int				dy;
	int				xinc;
	int				yinc;
	int				cumul;
	int				pass;
	int				width;
	int				hight;
	char			current;
	int				fd;
	int				nb;
	char			*line;
	int				x;
	int				y;
	int				l;
	int				j;
	int				xlen;
	int				ylen;
	int				coeff;
	int				bpp;
	int				endi;
	int				size_line;
	int				zoom;
	int				delta;
	char			*str;
	void			*img;
	void			*mlx;
	void			*win;
	t_pix			**pix;
}				t_env;

int				ft_check_error(int ac, char **av, t_env *e);
int				ft_size_grid(int ac, char **av, t_env *e);
void			count_value(t_env *e);
int				ft_close(int fd);
int				ft_parse(int ac, char **av, t_env *e);
int				ft_check_keycode(int keycode, void *param);
int				ft_init(t_env *e);
void			ft_create_window(t_env *e);
void			ft_create_image(t_env *e);
void			ft_print_tab(t_env *e);
void			ft_store_value(t_env *e);
void			ft_proj_cav(t_env *e);
void			ft_proj_iso(t_env *e);
void			ft_proj_grid(t_env *e);
void			ft_zoom(t_env *e);
void			ft_zoom_in(t_env *e);
void			ft_zoom_out(t_env *e);
void			ft_refresh_image(t_env *e, int keycode);
void			ft_translate_image(t_env*e, int keycode);
void			ft_change_alt(t_env *e, int keycode);
void			ft_go_up(t_env *e);
void			ft_go_down(t_env *e);
void			ft_go_left(t_env *e);
void			ft_go_right(t_env *e);
void			ft_tab_to_str(t_env *e);
void			ft_find_origin(t_env *e);
void			ft_labels(t_env *e);
void			ft_draw_seg2(t_env *e);
void			ft_draw(t_env *e);
void			ft_next_draw(t_env*e);
void			ft_next2_draw(t_env *e);

#endif
