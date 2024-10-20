/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:31:35 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/20 12:44:01 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

/**
 * @brief Fills a memory area with zeros.
 * 
 * Writes `n` zeroed bytes to the memory area pointed to by `s`. 
 * Does nothing if `n` is 0.
 * 
 * @param s The memory area to zero.
 * @param n The number of bytes to write.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief Allocates memory and sets it to zero.
 * 
 * Allocates memory for `count` elements of size `size` and sets it to zero.
 * 
 * @param count The number of elements to allocate.
 * @param size The size of each element.
 * @return A pointer to the allocated memory, or NULL if allocation fails.
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * @brief Searches for a byte in memory.
 * 
 * Searches the first `n` bytes of `s` for the first occurrence of the byte `c`.
 * 
 * @param s The memory area to search.
 * @param c The byte to search for.
 * @param n The number of bytes to search.
 * @return A pointer to the matching byte, or NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares two memory areas.
 * 
 * Compares the first `n` bytes of `s1` and `s2` byte by byte.
 * 
 * @param s1 The first memory area.
 * @param s2 The second memory area.
 * @param n The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero.
 */
int		ft_memcmp(const char *s1, const void *s2, size_t n);

/**
 * @brief Copies memory from one area to another.
 * 
 * Copies `n` bytes from `src` to `dst`. The memory areas must not overlap.
 * 
 * @param dst The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory area `dst`.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Copies memory, allowing overlap.
 * 
 * Copies `len` bytes from `src` to `dest`, even if memory areas overlap.
 * 
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param len The number of bytes to copy.
 * @return A pointer to the destination memory area `dest`.
 */
void	*ft_memmove(void *dest, const void *src, size_t len);

/**
 * @brief Fills memory with a constant byte.
 * 
 * Fills the first `len` bytes of the memory area `b` with the byte `c`.
 * 
 * @param b The memory area to fill.
 * @param c The byte to set.
 * @param len The number of bytes to fill.
 * @return A pointer to the memory area `b`.
 */
void	*ft_memset(void *b, int c, size_t len);

#endif