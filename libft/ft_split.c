/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:26:03 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:26:04 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_make_empty_strs(char const *s, char c)
{
	int		i;
	int		j;
	char	**dest;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			j ++;
		i ++;
	}
	dest = malloc(sizeof (char *) * (j + 1));
	if (!dest)
		return (0);
	dest[j] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	i = 0;
	k = 0;
	dest = ft_make_empty_strs(s, c);
	if (!dest)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] != c && s[j])
				j ++;
			dest[k ++] = ft_substr(s, i, j - i);
			i = j - 1;
		}
		if (s[i + 1] == '\0')
			break ;
		i ++;
	}
	return (dest);
}

void	ft_free_char_tab(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

int	ft_strlen_char_tab(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
