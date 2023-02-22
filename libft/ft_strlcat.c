/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:26:30 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:26:31 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstl;

	i = 0;
	dstl = ft_strlen(dst);
	if (dstsize < dstl)
		return (ft_strlen(src) + dstsize);
	while (src[i] && i + 1 + dstl < dstsize)
	{
		dst[dstl + i] = src[i];
		i ++;
	}
	dst[dstl + i] = '\0';
	return (ft_strlen(src) + dstl);
}
