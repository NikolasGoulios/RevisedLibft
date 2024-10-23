/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:46:55 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/23 19:46:14 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include <stdio.h>
# include <stddef.h>  // For size_t


/**
 * @brief Converts a string to uppercase.
 * 
 * Converts all lowercase characters in the string `str` to uppercase.
 * 
 * @param str The string to convert.
 * @return A pointer to the converted string.
 */
char	*ft_strupper(char *str);

/**
 * @brief Reverses a string in place.
 * 
 * Reverses the characters in the string `str` directly in memory.
 * 
 * @param str The string to reverse.
 * @return A pointer to the reversed string.
 */
char	*ft_strrev(char *str);

/**
 * @brief Duplicates up to `n` characters of a string.
 * 
 * Allocates memory and copies up to `n` characters from the string `s1`.
 * 
 * @param s1 The string to duplicate.
 * @param n The number of characters to copy.
 * @return A pointer to the new string, or NULL if allocation fails.
 */
char	*ft_strndup(const char *s1, size_t n);

/**
 * @brief Converts a string to lowercase.
 * 
 * Converts all uppercase characters in the string `str` to lowercase.
 * 
 * @param str The string to convert.
 * @return A pointer to the converted string.
 */
char	*ft_strlower(char *str);

/**
 * @brief Frees a string and sets the pointer to NULL.
 * 
 * Frees the memory allocated for `*as` and sets the pointer to NULL.
 * 
 * @param as The address of the string pointer to free.
 */
void	ft_strdel(char **as);

/**
 * @brief Splits a string into an array based on a delimiter.
 * 
 * Splits the string `s` into an array of 
 * strings using the character `c` as a delimiter.
 * 
 * @param s The string to split.
 * @param c The delimiter character.
 * @return An array of strings, or NULL if allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Locates the first occurrence of a character in a string.
 * 
 * Finds the first occurrence of `c` in the string `s`.
 * 
 * @param s The string to search.
 * @param c The character to search for.
 * @return A pointer to the first occurrence of `c`, or NULL if not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Duplicates a string.
 * 
 * Allocates and returns a duplicate of the string `s1`.
 * 
 * @param s1 The string to duplicate.
 * @return A pointer to the duplicated string, or NULL if allocation fails.
 */
char	*ft_strdup(const char *s1);

/**
 * @brief Applies a function to each character of a string by index.
 * 
 * Applies the function `f` to each character of `s`, 
 * passing the index as the first argument.
 * 
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Joins two strings into a new string.
 * 
 * Allocates and concatenates `s1` and `s2` into a new string.
 * 
 * @param s1 The first string.
 * @param s2 The second string.
 * @return A pointer to the new string, or NULL if allocation fails.
 */
char	*ft_strjoin(const char *s1, const char *s2);

/**
 * @brief Appends a string to another, with a size limit.
 * 
 * Appends `src` to the end of `dst`,
 * ensuring the result does not exceed `dstsize`.
 * 
 * @param dst The destination string.
 * @param src The source string.
 * @param dstsize The total size of the destination buffer.
 * @return The length of the string it tried to create (dst + src).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief Copies a string to a buffer, with a size limit.
 * 
 * Copies `src` to `dst`, ensuring no more than `dstsize` bytes are copied.
 * 
 * @param dst The destination buffer.
 * @param src The source string.
 * @param dstsize The size of the destination buffer.
 * @return The length of the source string.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Calculates the length of a string.
 * 
 * Returns the number of characters in the string `s`, excluding the null byte.
 * 
 * @param s The string to calculate the length of.
 * @return The length of the string.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Applies a function to each character, creating a new string.
 * 
 * Applies the function `f` to each character of 
 * `s` and creates a new string.
 * 
 * @param s The string to map.
 * @param f The function to apply to each character.
 * @return The new string, or NULL if allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Compares two strings up to a specified number of characters.
 * 
 * Compares the strings `s1` and `s2` up to `n` characters.
 * 
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The number of characters to compare.
 * @return A value less than, equal to, or greater than 0 if `s1` is less than,
 *         equal to, or greater than `s2`.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Locates a substring within a string, with a size limit.
 * 
 * Locates the first occurrence of `needle` in `haystack`, searching up to `len`.
 * 
 * @param haystack The string to search in.
 * @param needle The substring to search for.
 * @param len The maximum number of characters to search.
 * @return A pointer to the found substring, or NULL if not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Locates the last occurrence of a character in a string.
 * 
 * Finds the last occurrence of `c` in the string `s`.
 * 
 * @param s The string to search.
 * @param c The character to search for.
 * @return A pointer to the last occurrence of `c`, or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Trims leading and trailing characters from a string.
 * 
 * Returns a copy of `s1` with characters from `set` removed from both ends.
 * 
 * @param s1 The string to trim.
 * @param set The set of characters to trim.
 * @return A new string, or NULL if allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Extracts a substring from a string.
 * 
 * Returns a substring from `s`, starting at `start` with a max length of `len`.
 * 
 * @param s The original string.
 * @param start The starting index of the substring.
 * @param len The maximum length of the substring.
 * @return The extracted substring, or NULL if allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);


double	ft_atof(const char *str);

int ft_strcmp(char *s1, char *s2);
void	ft_strdel(char **as);

#endif