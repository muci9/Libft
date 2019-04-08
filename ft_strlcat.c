/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:25:51 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 16:01:46 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] && i < size)
		++i;
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		++j;
	}
	if (i < size)
		dst[i + j] = 0;
	return (i + ft_strlen(src));
}
