/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_vect_op2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:30:57 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:30:58 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_vect	op_add(t_vect v1, t_vect v2)
{
	t_vect	ret;

	ret.x = v1.x + v2.x;
	ret.y = v1.y + v2.y;
	ret.z = v1.z + v2.z;
	return (ret);
}

t_vect	op_subs(t_vect v1, t_vect v2)
{
	t_vect	ret;

	ret.x = v1.x - v2.x;
	ret.y = v1.y - v2.y;
	ret.z = v1.z - v2.z;
	return (ret);
}

t_vect	op_multf(double a, t_vect v)
{
	t_vect	ret;

	ret.x = a * v.x;
	ret.y = a * v.y;
	ret.z = a * v.z;
	return (ret);
}

double	length(t_vect a)
{
	return (sqrtf(dot(a, a)));
}
