/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:25:33 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:25:34 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*strd;
	char	*strs;
	size_t	i;

	if (!dest && !src)
		return (dest);
	i = 0;
	strs = (char *) src;
	strd = dest;
	if (dest > src)
	{
		while (n -- > 0)
			strd[n] = strs[n];
	}
	else
	{
		while (i < n)
		{
			strd[i] = strs[i];
			i ++;
		}
	}
	return (dest);
}
