/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:25:54 by ngoulios          #+#    #+#             */
/*   Updated: 2024/11/16 15:26:42 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

/**
 * @brief Converts a string to an integer.
 * 
 * Converts the string `str` to an integer, skipping leading whitespace and 
 * handling optional '+' or '-' signs.
 * 
 * @param str The string to convert.
 * @return The converted integer. Returns 0 if no valid conversion occurs.
 */
int		ft_atoi(const char *str);

/**
 * @brief Converts an integer to a string.
 * 
 * Converts the integer `n` to a null-terminated string. The string includes the
 * sign if needed.
 * 
 * @param n The integer to convert.
 * @return A pointer to the newly allocated string or NULL if allocation fails.
 */
char	*ft_itoa(int n);

long	ft_atol(const char *str);

#endif