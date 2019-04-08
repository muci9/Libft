/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:26:25 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/07 20:54:31 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (s && f)
	{
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (str)
		{
			while (*s)
			{
				str[i++] = f(*s);
				++s;
			}
			str[i] = 0;
			return (str);
		}
	}
	return (NULL);
}
