/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cipmures <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 19:17:26 by cipmures          #+#    #+#             */
/*   Updated: 2017/01/06 19:25:40 by cipmures         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	if (!*str)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		++str;
	}
	return (res * sign);
}
