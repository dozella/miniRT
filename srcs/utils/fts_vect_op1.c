/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_vect_op1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:30:53 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:30:54 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

double	dot(t_vect v1, t_vect v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

double	get_norm2(t_vect vect)
{
	return (vect.x * vect.x + vect.y * vect.y + vect.z * vect.z);
}

void	normalize(t_vect *vect)
{
	double	norm;

	norm = sqrt(get_norm2(*vect));
	vect->x = vect->x / norm;
	vect->y = vect->y / norm;
	vect->z = vect->z / norm;
}

t_vect	get_normalize(t_vect vect)
{
	double	norm;

	norm = sqrt(get_norm2(vect));
	vect.x = vect.x / norm;
	vect.y = vect.y / norm;
	vect.z = vect.z / norm;
	return (vect);
}

t_vect	cross(t_vect a, t_vect b)
{
	t_vect	c;

	c.x = a.y * b.z - a.z * b.y;
	c.y = a.z * b.x - a.x * b.z;
	c.z = a.x * b.y - a.y * b.x;
	return (c);
}
