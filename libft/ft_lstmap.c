/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:25:03 by cnearing          #+#    #+#             */
/*   Updated: 2022/11/04 16:25:04 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*temp;

	(void)del;
	dest = NULL;
	temp = lst;
	while (temp)
	{
		ft_lstadd_back(&dest, ft_lstnew(f(temp->content)));
		temp = temp->next;
	}
	return (dest);
}
