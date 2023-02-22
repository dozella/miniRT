/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ambient.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:28:19 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:28:20 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minirt.h"

static int	is_input_valid(char **split_line)
{	
	return (is_number_param_valid(3, split_line)
		&& is_double_correct(split_line[1])
		&& ft_atoi_double(split_line[1]) >= 0
		&& ft_atoi_double(split_line[1]) <= 1
		&& is_color_valid(split_line[2]));
}

int	set_ambient(t_disp *disp, char **split_line)
{
	if (disp->amb.is_set)
	{
		ft_putstr_fd("Error: You cannot have two ambient lights.\t", 2);
		return (1);
	}
	if (!is_input_valid(split_line))
	{
		ft_putstr_fd("Error: Cannot create ambiant light.\t", 2);
		return (1);
	}
	disp->amb.is_set = 1;
	disp->amb.w = ft_atoi_double(split_line[1]);
	return (init_color(disp->amb.color, split_line[2]) == NULL);
}
