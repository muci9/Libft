/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:34:22 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/07 20:54:46 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s && f)
	{
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (str && s)
		{
			i = 0;
			while (s[i])
			{
				str[i] = f(i, s[i]);
				++i;
			}
			str[i] = 0;
			return (str);
		}
	}
	return (NULL);
}
