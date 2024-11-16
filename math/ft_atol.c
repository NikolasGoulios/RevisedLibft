/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:01:43 by ngoulios          #+#    #+#             */
/*   Updated: 2024/11/16 17:26:47 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/ctype/ctype.h"
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
		i++;
	}
	return (results * sign);
}
