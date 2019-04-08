/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:27:03 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 14:27:05 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (*src && n)
	{
		dst[i] = *src;
		--n;
		++i;
		++src;
	}
	while (n)
	{
		dst[i++] = 0;
		--n;
	}
	return (dst);
}
