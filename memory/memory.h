/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:31:35 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/19 13:07:20 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

/**
 * @brief Fills a memory area with zeros.
 * 
 * This function writes `n` zeroed bytes to the memory area pointed to by `s`.
 * If `n` is zero, the function does nothing.
 * 
 * @param s The pointer to the memory area to be zeroed.
 * @param n The number of bytes to write as zero.
 */
void ft_bzero(void *s, size_t n);

/**
 * @brief Allocates memory and initializes it to zero.
 * 
 * This function allocates memory for an array of `count` elements, each of size `size`,
 * and initializes all the memory to zero.
 * 
 * @param count The number of elements to allocate.
 * @param size The size of each element.
 * @return A pointer to the allocated memory, or NULL if the allocation fails.
 */
void *ft_calloc(size_t count, size_t size);

/**
 * @brief Searches for a byte in a memory area.
 * 
 * This function searches the first `n` bytes of the memory area pointed to by `s` for
 * the first occurrence of the byte `c`.
 * 
 * @param s The memory area to search.
 * @param c The byte to search for.
 * @param n The number of bytes to search.
 * @return A pointer to the matching byte, or NULL if the byte is not found within the first `n` bytes.
 */
void *ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares two memory areas.
 * 
 * This function compares the first `n` bytes of the memory areas `s1` and `s2`. The comparison
 * is done byte by byte.
 * 
 * @param s1 The first memory area.
 * @param s2 The second memory area.
 * @param n The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if `s1` is found to be less than,
 *         equal to, or greater than `s2`.
 */
int ft_memcmp(const char *s1, const void *s2, size_t n);

/**
 * @brief Copies memory from one area to another.
 * 
 * This function copies `n` bytes from memory area `src` to memory area `dst`. The memory areas
 * must not overlap.
 * 
 * @param dst The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory area `dst`.
 */
void *ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Safely copies memory from one area to another, even if they overlap.
 * 
 * This function copies `len` bytes from memory area `src` to memory area `dest`, allowing
 * for overlap of the memory areas.
 * 
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param len The number of bytes to copy.
 * @return A pointer to the destination memory area `dest`.
 */
void *ft_memmove(void *dest, const void *src, size_t len);

/**
 * @brief Fills a memory area with a constant byte.
 * 
 * This function fills the first `len` bytes of the memory area pointed to by `b` with the
 * constant byte `c`.
 * 
 * @param b The memory area to fill.
 * @param c The byte value to set.
 * @param len The number of bytes to fill.
 * @return A pointer to the memory area `b`.
 */
void *ft_memset(void *b, int c, size_t len);

#endif