/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phong_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:28:01 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:28:02 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

double	phong(t_light *l, t_ray *rc)
{
	t_vect	light_dir;
	t_vect	reflect;
	double	dot_pix_l;
	double	phong;
	double	lobe;

	phong = 0;
	light_dir = get_normalize(op_subs(l->o, rc->pix.pt));
	dot_pix_l = dot(rc->pix.norm, light_dir);
	if (dot_pix_l > 0)
	{
		reflect = op_subs(op_multf(2 * dot(rc->pix.norm, light_dir),
					rc->pix.norm), light_dir);
		lobe = dot(reflect, op_multf(-1, rc->v));
		if (lobe > 0)
			phong = powf(lobe, PHONG_R);
	}
	return (phong);
}
