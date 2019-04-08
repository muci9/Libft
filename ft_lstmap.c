/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 18:59:57 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/07 20:55:02 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_clean(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		ft_memdel((void **)&lst);
		lst = tmp;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*newfirst;

	if (lst && f)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		if (!new)
			return (NULL);
		new = f(new);
		newfirst = new;
		while (lst->next)
		{
			lst = lst->next;
			new->next = ft_lstnew(lst->content, lst->content_size);
			if (!new->next)
			{
				ft_clean(newfirst);
				return (NULL);
			}
			new->next = f(new->next);
			new = new->next;
		}
		return (newfirst);
	}
	return (NULL);
}
