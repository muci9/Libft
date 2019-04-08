/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 20:09:10 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/04 20:10:19 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*area;

	area = (void *)malloc(sizeof(void) * size);
	if (area)
	{
		ft_bzero(area, size);
		return (area);
	}
	return (NULL);
}
