/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:26:16 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:26:17 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	i;

	cpy = malloc (sizeof (char) * ft_strlen(s1) + 1);
	if (!cpy)
		return (0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		cpy[i] = s1[i];
		i ++;
	}
	cpy[i] = '\0';
	return (cpy);
}
