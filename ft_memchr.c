/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 20:14:20 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/04 20:45:07 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*mys;

	mys = (char *)s;
	while (n)
	{
		if (*mys == (char)c)
			return (mys);
		++mys;
		--n;
	}
	return (NULL);
}
