/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 20:18:24 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/04 20:21:00 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *mys1;
	const unsigned char *mys2;

	mys1 = (unsigned char *)s1;
	mys2 = (unsigned char *)s2;
	while (n && *mys1 == *mys2)
	{
		++mys1;
		++mys2;
		--n;
	}
	if (n == 0)
		return (0);
	return (*mys1 - *mys2);
}
