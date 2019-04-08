/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:31:37 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 14:31:39 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *pnt;

	pnt = NULL;
	while (*s)
	{
		if (*s == (char)c)
			pnt = (char *)s;
		++s;
	}
	if (*s == (char)c)
		pnt = (char *)s;
	return (pnt);
}
