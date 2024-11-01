/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:36:02 by ngoulios          #+#    #+#             */
/*   Updated: 2024/11/01 14:55:47 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

static double	parse_fraction(const char *str, int i);

double	ft_atof(const char *str)
{
	double	results;
	int		sign;
	int		i;

	results = 0.0;
	sign = 1;
	i = 0;
	while (isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		results = results * 10.0 + (str[i++] - '0');
	results += parse_fraction(str, i);
	while (str[i] && isspace(str[i]))
		i++;
	if (str[i] != '\0')
		return (0.0);
	return (results * sign);
}

static double	parse_fraction(const char *str, int i)
{
	double	fraction;
	double	result;

	fraction = 1.0;
	result = 0.0;
	if (str[i] == '.')
	{
		i++;
		while (str[i] && str[i] >= '0' && str[i] <= '9')
		{
			fraction /= 10.0;
			result += (str[i++] - '0') * fraction;
		}
	}
	return (result);
}
