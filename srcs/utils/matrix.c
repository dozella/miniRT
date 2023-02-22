/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:31:05 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:31:06 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_matrix	init_matrix(t_vect x, t_vect y, t_vect z)
{
	t_matrix	matrix;

	matrix.x = x;
	matrix.y = y;
	matrix.z = z;
	return (matrix);
}

t_vect	mult_mat_vect(t_matrix matrix, t_vect vect)
{
	t_vect	ret;

	ret.x = matrix.x.x * vect.x + matrix.x.y * vect.y + matrix.x.z * vect.z;
	ret.y = matrix.y.x * vect.x + matrix.y.y * vect.y + matrix.y.z * vect.z;
	ret.z = matrix.z.x * vect.x + matrix.z.y * vect.y + matrix.z.z * vect.z;
	return (ret);
}
