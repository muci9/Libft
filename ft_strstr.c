/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:32:11 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 14:32:15 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *small)
{
	char *pnt;
	char *aux;

	if (!*small)
		return ((char *)big);
	aux = (char *)small;
	while (*big)
	{
		if (*big == *aux)
		{
			pnt = (char *)big;
			while (*big && *aux && *big == *aux)
			{
				++aux;
				++big;
			}
			if (!*aux)
				return (pnt);
			big = pnt;
			pnt = NULL;
			aux = (char *)small;
		}
		++big;
	}
	return (NULL);
}
