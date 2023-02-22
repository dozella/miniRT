/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:23:24 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:23:25 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "struct.h"
# include "minirt.h"

# define PHONG_R 20

typedef struct s_dir
{
	t_pt	o;
	t_vect	v;
}	t_dir;

typedef struct s_cone
{
	t_pt	o;
	t_vect	v;
	double	h;
	double	r;
	int		color[3];
	t_cir	cap;
}	t_co;

t_matrix	init_matrix(t_vect x, t_vect y, t_vect z);
t_vect		mult_mat_vect(t_matrix matrix, t_vect vect);
double		phong(t_light *l, t_ray *rc);

/*cone_utils*/
t_co		copy_cone(t_co *cone);
double		find_solution(t_ray *rc, double b, double d, double a);
t_vect		get_normal_cone(t_ray *rc, t_co *co, double t);

/*cone*/
int			co_inter(t_ray *rc, t_co *co);
int			add_cone(t_disp *disp, char **split_line);

#endif
