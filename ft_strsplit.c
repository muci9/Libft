/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:33:01 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 18:59:18 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_wordcount(char const *s, char c)
{
	size_t nr;

	nr = 0;
	while (*s)
	{
		if (*s == c)
			++s;
		else
		{
			++nr;
			while (*s != c && *s)
				++s;
		}
	}
	return (nr);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t len;

	len = 0;
	while (*s != c && *s)
	{
		++s;
		++len;
	}
	return (len);
}

static void		ft_clean(char **s_split, size_t i)
{
	while (i > 0)
	{
		if (s_split[i])
			ft_strdel(&s_split[i]);
		--i;
	}
	if (s_split[0])
		ft_strdel(&s_split[i]);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	nr_lin;
	size_t	i;
	char	**s_split;

	if (!s)
		return (NULL);
	nr_lin = ft_wordcount(s, c);
	if (!(s_split = (char **)malloc(sizeof(char *) * (nr_lin + 1))))
		return (NULL);
	i = 0;
	while (nr_lin--)
	{
		while (*s == c && *s)
			++s;
		s_split[i] = ft_strsub(s, 0, ft_wordlen(s, c));
		if (s_split[i] == NULL)
		{
			ft_clean(s_split, i);
			return (NULL);
		}
		++i;
		s += ft_wordlen(s, c);
	}
	s_split[i] = 0;
	return (s_split);
}
