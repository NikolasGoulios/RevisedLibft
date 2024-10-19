/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:25:54 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/19 13:04:41 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

/**
 * @brief Converts a string to an integer.
 * 
 * This function takes a string `str` and converts it to an integer, interpreting the
 * number represented by the characters in the string. It skips any leading whitespace,
 * handles optional '+' or '-' signs, and converts the number accordingly.
 * 
 * @param str The string to be converted.
 * @return The converted integer. If no valid conversion can be performed, the function returns 0.
 */
int ft_atoi(const char *str);

/**
 * @brief Converts an integer to a string.
 * 
 * This function takes an integer `n` and converts it into a null-terminated string.
 * The resulting string represents the integer, including the sign if necessary.
 * 
 * @param n The integer to be converted.
 * @return A pointer to the newly allocated string representing the integer, or NULL if the allocation fails.
 */
char *ft_itoa(int n);

#endif