/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 14:31:20 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 14:31:23 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ft_len;

	ft_len = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len >= ft_len)
	{
		if (ft_strncmp(big, little, ft_len) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
