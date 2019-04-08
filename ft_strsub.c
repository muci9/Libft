/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:32:20 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 18:34:54 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (!*s)
		return (0);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub)
	{
		i = 0;
		while (i < len)
		{
			sub[i] = s[start + i];
			++i;
		}
		sub[i] = 0;
		return (sub);
	}
	return (NULL);
}
