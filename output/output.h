/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:37:15 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/19 13:08:30 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_H
# define OUTPUT_H

/**
 * @brief Outputs a character to the given file descriptor.
 * 
 * This function writes the character `c` to the file descriptor `fd`.
 * 
 * @param c The character to output.
 * @param fd The file descriptor to write to.
 */
void ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs a character to the standard output.
 * 
 * This function writes the character `c` to the standard output.
 * 
 * @param c The character to output.
 * @return The number of characters written, which is always 1.
 */
int ft_putchar(char c);

/**
 * @brief Outputs a string followed by a newline to the given file descriptor.
 * 
 * This function writes the string `str` followed by a newline to the file descriptor `fd`.
 * 
 * @param str The string to output.
 * @param fd The file descriptor to write to.
 */
void ft_putendl_fd(char *str, int fd);

/**
 * @brief Outputs an integer to the given file descriptor.
 * 
 * This function writes the integer `n` to the file descriptor `fd`.
 * 
 * @param n The integer to output.
 * @param fd The file descriptor to write to.
 */
void ft_putnbr_fd(int n, int fd);

/**
 * @brief Outputs an integer to the standard output.
 * 
 * This function writes the integer `n` to the standard output.
 * 
 * @param n The integer to output.
 * @return The number of characters written.
 */
int ft_putnbr(int n);

/**
 * @brief Outputs a string to the given file descriptor.
 * 
 * This function writes the string `str` to the file descriptor `fd`.
 * 
 * @param str The string to output.
 * @param fd The file descriptor to write to.
 */
void ft_putstr_fd(char *str, int fd);

/**
 * @brief Outputs a string to the standard output.
 * 
 * This function writes the string `str` to the standard output.
 * 
 * @param str The string to output.
 * @return The number of characters written.
 */
int ft_putstr(char *str);

/**
 * @brief Outputs a formatted string to the standard output.
 * 
 * This function writes the formatted string `str` to the standard output, similar to `printf`.
 * It supports format specifiers for integers, characters, strings, and more.
 * 
 * @param str The format string.
 * @param ... The arguments to format and output.
 * @return The number of characters written.
 */
int ft_printf(const char *str, ...);

/**
 * @brief Outputs a memory address to the standard output.
 * 
 * This function writes the memory address `format` to the standard output in hexadecimal format.
 * 
 * @param format The pointer whose address is to be output.
 * @return The number of characters written.
 */
int ft_putaddress(void *format);

/**
 * @brief Outputs a number in hexadecimal format to the standard output.
 * 
 * This function writes the number `n` to the standard output in hexadecimal format.
 * If `format` is 'x', the number is printed in lowercase; if `format` is 'X', it is printed in uppercase.
 * 
 * @param n The number to output.
 * @param format The format specifier ('x' for lowercase, 'X' for uppercase).
 * @return The number of characters written.
 */
int ft_puthexa(unsigned long n, char format);

/**
 * @brief Outputs an unsigned integer to the standard output.
 * 
 * This function writes the unsigned integer `n` to the standard output.
 * 
 * @param n The unsigned integer to output.
 * @return The number of characters written.
 */
int ft_putunsigned(unsigned int n);

#endif