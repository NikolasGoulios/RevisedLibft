/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:01:43 by ngoulios          #+#    #+#             */
/*   Updated: 2024/11/15 23:02:18 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"
#include <limits.h>

long	ft_atol(const char *str)
{
	long	results;
	long	sign;
	int		i;

	results = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		results = results * 10 + (str[i] - '0');
		if (results * sign > LONG_MAX)
			return (-1);
		if (results * sign < LONG_MIN)
			return (0);
		i++;
	}
	return (results * sign);
}