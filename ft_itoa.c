/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 19:40:21 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 16:51:35 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int		neg;
	char	*s;
	long	nb;
	int		digits;

	digits = ft_intlen(n);
	neg = 0;
	nb = n;
	if (n < 0)
	{
		neg = 1;
		nb = -nb;
	}
	s = (char *)malloc(sizeof(char) * (digits + neg + 1));
	if (!s)
		return (NULL);
	if (neg)
		s[0] = '-';
	s[digits + neg] = 0;
	while (digits > 0)
	{
		s[digits-- + neg - 1] = nb % 10 + '0';
		nb /= 10;
	}
	return (s);
}
