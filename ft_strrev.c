/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 19:35:28 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 20:30:32 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t	i;
	size_t	end;
	char	aux;

	if (s)
	{
		i = 0;
		end = ft_strlen(s);
		while (i < end / 2)
		{
			aux = s[i];
			s[i] = s[end - i - 1];
			s[end - i - 1] = aux;
			++i;
		}
		return (s);
	}
	return (NULL);
}
