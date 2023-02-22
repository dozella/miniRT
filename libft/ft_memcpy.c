/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:25:29 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:25:30 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*strs;
	size_t	i;

	if (!src && !dst)
		return (dst);
	strs = (char *) src;
	i = 0;
	while (i < n)
	{
		ft_memset(dst + i, strs[i], 1);
		i ++;
	}
	return (dst);
}
