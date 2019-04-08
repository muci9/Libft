/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 20:11:32 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/04 20:13:16 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*mydest;
	char	*mysrc;

	mydest = (char *)dest;
	mysrc = (char *)src;
	while (n)
	{
		*mydest = *mysrc;
		if (*mydest == c)
			return (++mydest);
		++mydest;
		++mysrc;
		--n;
	}
	return (NULL);
}
