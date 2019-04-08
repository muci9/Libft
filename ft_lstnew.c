/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 19:00:31 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/04 19:00:40 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lst;

	lst = (t_list*)ft_memalloc(sizeof(t_list));
	if (lst)
	{
		if (content)
		{
			lst->content = ft_memalloc(content_size);
			if (!lst->content)
				return (NULL);
			ft_memcpy(lst->content, content, content_size);
			lst->content_size = content_size;
		}
		else
		{
			lst->content = NULL;
			lst->content_size = 0;
		}
		lst->next = NULL;
		return (lst);
	}
	return (NULL);
}
