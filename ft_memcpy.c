/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 20:24:09 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/04 20:25:57 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *mydest;
	char *mysrc;

	mydest = (char *)dest;
	mysrc = (char *)src;
	while (n)
	{
		*mydest = *mysrc;
		++mydest;
		++mysrc;
		--n;
	}
	return (dest);
}
