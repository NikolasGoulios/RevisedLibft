/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctype.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:14:34 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/19 12:59:09 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CTYPE_H
# define CTYPE_H

/**
 * @brief Checks if input is Alphabetical or Numerical
 *
 * @param c an intiger c
 * @return 1 if True 0 if False
 */
int	ft_isalnum(int c);

/**
 * @brief Checks if the character is an alphabetic letter.
 * 
 * This function checks whether the given character `c` is an alphabetic letter (either lowercase or uppercase).
 * 
 * @param c The character to check.
 * @return 1 if the character is alphabetic, 0 otherwise.
 */
int ft_isalpha(int c);

/**
 * @brief Checks if the character is part of the ASCII set.
 * 
 * This function checks whether the given character `c` is a valid ASCII character (0 through 127).
 * 
 * @param c The character to check.
 * @return 1 if the character is in the ASCII set, 0 otherwise.
 */
int ft_isascii(int c);

/**
 * @brief Checks if the character is a digit (0-9).
 * 
 * This function checks whether the given character `c` is a numeric digit.
 * 
 * @param c The character to check.
 * @return 1 if the character is a digit, 0 otherwise.
 */
int ft_isdigit(int c);

/**
 * @brief Checks if the character is printable.
 * 
 * This function checks whether the given character `c` is a printable character, including space.
 * 
 * @param c The character to check.
 * @return 1 if the character is printable, 0 otherwise.
 */
int ft_isprint(int c);

/**
 * @brief Converts an uppercase character to lowercase.
 * 
 * This function converts the given character `c` to its lowercase equivalent if it is an uppercase letter.
 * 
 * @param c The character to convert.
 * @return The lowercase equivalent of the character, or `c` if it is not an uppercase letter.
 */
int ft_tolower(int c);

/**
 * @brief Converts a lowercase character to uppercase.
 * 
 * This function converts the given character `c` to its uppercase equivalent if it is a lowercase letter.
 * 
 * @param c The character to convert.
 * @return The uppercase equivalent of the character, or `c` if it is not a lowercase letter.
 */
int ft_toupper(int c);

#endif