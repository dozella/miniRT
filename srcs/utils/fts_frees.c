/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_frees.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:30:44 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 17:03:46 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	free_display_and_exit(t_disp *disp)
{
	mlx_destroy_image(disp->mlx_ptr, disp->image.p);
	mlx_clear_window(disp->mlx_ptr, disp->win_ptr);
	mlx_destroy_window(disp->mlx_ptr, disp->win_ptr);
	lobj_free(&disp->lobj);
	lobj_free(&disp->llight);
	free(disp->mlx_ptr);
	exit(0);
	return (0);
}

int	keys_actions(int keycode, t_disp *disp)
{
	if (keycode == 53)
		free_display_and_exit(disp);
	return (0);
}
