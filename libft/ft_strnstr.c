/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:26:56 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:26:57 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needlel;

	i = 0;
	needlel = ft_strlen(needle);
	if (len < needlel)
		return (0);
	if (needlel == 0)
		return ((char *) haystack);
	while (haystack[i] && i <= len - needlel && len > 0)
	{
		if (ft_strncmp(haystack + i, needle, needlel) == 0)
			return ((char *) haystack + i);
		i ++;
	}
	return (NULL);
}
