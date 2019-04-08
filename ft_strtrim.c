/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:32:40 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 18:13:23 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char const *end;

	if (!s)
		return (NULL);
	while (ft_iswhitespace(*s))
		++s;
	if (*s == 0)
		return (ft_strnew(0));
	end = s + ft_strlen(s) - 1;
	while (ft_iswhitespace(*end))
		--end;
	return (ft_strsub(s, 0, end - s + 1));
}
