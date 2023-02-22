/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:27:00 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:27:01 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	c = (unsigned char) c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (str + i);
		i --;
	}
	return (0);
}
