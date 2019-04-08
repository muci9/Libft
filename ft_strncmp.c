/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:25:59 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 14:29:33 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n)
	{
		while ((unsigned char)*s1 == (unsigned char)*s2 && *s1 && *s2 && n > 1)
		{
			++s1;
			++s2;
			--n;
		}
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
