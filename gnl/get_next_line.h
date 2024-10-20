/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 20:51:07 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/20 12:31:55 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 16
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
# endif

/**
 * @brief Frees the previous buffer and joins it with the new buffer.
 * 
 * Frees the memory of the old buffer, joins it with the new buffer,
 * and returns the concatenated result.
 * 
 * @param buffer The original buffer to free.
 * @param buf The new buffer to append.
 * @return The concatenated result of buffer and buf.
 */
char	*ft_free(char *buffer, char *buf);

/**
 * @brief Reads from a file descriptor and stores the result.
 * 
 * Reads from the `fd` and stores the content in the `res` buffer.
 * It reads until the buffer is filled or a nl is found.
 * 
 * @param fd The file descriptor to read from.
 * @param res The buffer to store the result.
 * @return The updated buffer or NULL if an error occurred.
 */
char	*read_file(int fd, char *res);

/**
 * @brief Moves to the next part of the buffer after a newline.
 * 
 * Frees the old buffer and returns the remaining content after the newline.
 * 
 * @param buffer The buffer to process.
 * @return The remaining part of the buffer or NULL if no newline is found.
 */
char	*ft_next(char *buffer);

/**
 * @brief Extracts a line from the buffer.
 * 
 * Extracts the current line from the buffer, ending at a newline or the
 * end of the buffer.
 * 
 * @param buffer The buffer to process.
 * @return The extracted line, or NULL if the buffer is empty.
 */
char	*ft_line(char *buffer);

/**
 * @brief Reads the next line from a file descriptor.
 * 
 * Reads the next line from `fd`, 
 * managing the buffer and returning a line at a time.
 * 
 * @param fd The file descriptor to read from.
 * @return The next line or NULL if no more lines or an error occurs.
 */
char	*get_next_line(int fd);

#endif