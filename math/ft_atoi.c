/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:39:50 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/24 19:20:50 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype/ctype.h"
#include <limits.h>

int ft_atoi(const char *str)
{
    long results = 0;
    long sign = 1;
    int i = 0;

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
        if (results * sign > INT_MAX)
            return (-1);
        if (results * sign < INT_MIN)
            return (0);

        i++;
    }
    return ((int)(results * sign));
}

