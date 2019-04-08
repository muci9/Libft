/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:30:33 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 14:34:54 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (size + 1));
	if (s)
	{
		while (size + 1)
			s[size--] = 0;
		return (s);
	}
	return (NULL);
}
