/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:26:11 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:26:12 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *) s;
	c = (unsigned char) c;
	while (i <= ft_strlen(str))
	{
		if (str[i] == c)
			return (str + i);
		if (str[i] != '\0' && str[i + 1] == '\0' && c == '\0')
			return (str + i + 1);
		i ++;
	}
	return (NULL);
}
