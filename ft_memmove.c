/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 20:28:53 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 19:13:37 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*mysrc;
	char		*dst;

	dst = (char *)dest;
	mysrc = (const char *)src;
	if (mysrc < dst)
	{
		mysrc = mysrc + n - 1;
		dst = dst + n - 1;
		while (n)
		{
			*dst-- = *mysrc--;
			--n;
		}
	}
	else
		while (n)
		{
			*dst++ = *mysrc++;
			--n;
		}
	return (dest);
}
