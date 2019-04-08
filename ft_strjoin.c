/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:27:10 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 18:34:39 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s = (char *)malloc(sizeof(char) * (len));
	if (s)
	{
		i = 0;
		while (*s1)
		{
			s[i++] = *s1;
			++s1;
		}
		while (*s2)
		{
			s[i++] = *s2;
			++s2;
		}
		s[i] = 0;
		return (s);
	}
	return (NULL);
}
