/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:46:55 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/19 13:10:14 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

/**
 * @brief Splits a string into an array of strings based on a delimiter.
 * 
 * This function splits the string `s` into an array of strings, using the character `c` as a delimiter.
 * 
 * @param s The string to split.
 * @param c The delimiter character.
 * @return An array of strings resulting from the split, or NULL if the allocation fails.
 */
char **ft_split(char const *s, char c);

/**
 * @brief Locates the first occurrence of a character in a string.
 * 
 * This function finds the first occurrence of the character `c` in the string `s`.
 * 
 * @param s The string to search in.
 * @param c The character to search for.
 * @return A pointer to the first occurrence of the character, or NULL if not found.
 */
char *ft_strchr(const char *s, int c);

/**
 * @brief Duplicates a string.
 * 
 * This function allocates memory and duplicates the string `s1`, returning a pointer to the newly
 * allocated copy of the string.
 * 
 * @param s1 The string to duplicate.
 * @return A pointer to the duplicated string, or NULL if the allocation fails.
 */
char *ft_strdup(const char *s1);

/**
 * @brief Applies a function to each character of a string, passing its index as a parameter.
 * 
 * This function iterates over the string `s` and applies the function `f` to each character,
 * passing the character's index as the first argument to the function.
 * 
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Joins two strings into a new string.
 * 
 * This function allocates memory and concatenates `s1` and `s2` into a new string.
 * 
 * @param s1 The first string.
 * @param s2 The second string.
 * @return A pointer to the newly allocated string, or NULL if the allocation fails.
 */
char *ft_strjoin(const char *s1, const char *s2);

/**
 * @brief Appends a string to the end of another string, with a size limit.
 * 
 * This function appends the string `src` to the end of `dst`, ensuring that the total length
 * of the result does not exceed `dstsize` bytes.
 * 
 * @param dst The destination string.
 * @param src The source string.
 * @param dstsize The total size of the destination buffer.
 * @return The total length of the string it tried to create (initial length of dst + length of src).
 */
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief Copies a string to another buffer, with a size limit.
 * 
 * This function copies the string `src` to the buffer `dst`, ensuring that no more than `dstsize` bytes are copied.
 * 
 * @param dst The destination buffer.
 * @param src The source string.
 * @param dstsize The size of the destination buffer.
 * @return The length of the source string.
 */
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Calculates the length of a string.
 * 
 * This function returns the number of characters in the string `s`, excluding the terminating null byte.
 * 
 * @param s The string to calculate the length of.
 * @return The length of the string.
 */
size_t ft_strlen(const char *s);

/**
 * @brief Applies a function to each character of a string, creating a new string.
 * 
 * This function applies the function `f` to each character of the string `s` to create a new string
 * where each character is the result of the function `f`.
 * 
 * @param s The string to map.
 * @param f The function to apply to each character.
 * @return The new string created by applying the function, or NULL if the allocation fails.
 */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Compares two strings up to a specified number of characters.
 * 
 * This function compares the strings `s1` and `s2` up to `n` characters.
 * 
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if `s1` is found to be less than,
 *         equal to, or greater than `s2`.
 */
int ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Locates a substring within a string, with a size limit.
 * 
 * This function locates the first occurrence of the substring `needle` within `haystack`,
 * where not more than `len` characters are searched.
 * 
 * @param haystack The string to search in.
 * @param needle The substring to search for.
 * @param len The maximum number of characters to search.
 * @return A pointer to the beginning of the found substring, or NULL if the substring is not found.
 */
char *ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Locates the last occurrence of a character in a string.
 * 
 * This function finds the last occurrence of the character `c` in the string `s`.
 * 
 * @param s The string to search in.
 * @param c The character to search for.
 * @return A pointer to the last occurrence of the character, or NULL if not found.
 */
char *ft_strrchr(const char *s, int c);

/**
 * @brief Trims leading and trailing characters from a string.
 * 
 * This function allocates and returns a copy of the string `s1` with the characters
 * specified in `set` removed from the beginning and the end of the string.
 * 
 * @param s1 The string to trim.
 * @param set The set of characters to trim.
 * @return A new string, or NULL if the allocation fails.
 */
char *ft_strtrim(char const *s1, char const *set);

/**
 * @brief Extracts a substring from a string.
 * 
 * This function allocates and returns a substring from the string `s`, starting
 * at index `start` and having a maximum length of `len` characters.
 * 
 * @param s The original string.
 * @param start The starting index of the substring.
 * @param len The maximum length of the substring.
 * @return The extracted substring, or NULL if the allocation fails.
 */
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif