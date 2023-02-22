/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:27:04 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:27:05 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	s1len;
	int		i;
	int		j;

	s1len = ft_strlen(s1);
	i = 0;
	j = s1len - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i ++;
	while (j > 0 && ft_strchr(set, s1[j]))
		j --;
	if (j == 0)
		dest = ft_strdup("");
	else
		dest = ft_substr(s1, i, j - i + 1);
	if (!dest)
		return (0);
	return (dest);
}
