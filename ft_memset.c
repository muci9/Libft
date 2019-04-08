/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 20:37:30 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/04 20:39:20 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*myb;

	myb = (char *)b;
	while (len)
	{
		*myb = (char)c;
		++myb;
		--len;
	}
	return (b);
}
