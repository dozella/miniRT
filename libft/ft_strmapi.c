/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:26:46 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:26:47 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	dest = ft_strdup(s);
	i = 0;
	if (!dest)
		return (0);
	while (dest[i])
	{
		dest[i] = f(i, dest[i]);
		i ++;
	}
	return (dest);
}
