/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:27:28 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 14:27:29 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = ft_strlen(dst);
	while (n && *src)
	{
		dst[i] = *src;
		++i;
		--n;
		++src;
	}
	dst[i] = 0;
	return (dst);
}
