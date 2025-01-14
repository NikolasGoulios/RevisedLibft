/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:36:02 by ngoulios          #+#    #+#             */
/*   Updated: 2024/11/01 16:41:47 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

double	ft_atof(const char *str)
{
	double	results;
	double	fraction;
	int		sign;
	int		i;

	results = 0.0;
	fraction = 1.0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		results = results * 10.0 + (str[i++] - '0');
	if (str[i++] == '.')
	{
		while (str[i] && str[i] >= '0' && str[i] <= '9')
		{
			fraction /= 10.0;
			results += (str[i++] - '0') * fraction;
		}
	}
	return (results * sign);
}
