/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 20:51:07 by ngoulios          #+#    #+#             */
/*   Updated: 2024/10/19 13:01:49 by ngoulios         ###   ########.fr       */
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
 * This function frees the memory of the old buffer, joins it with the new buffer,
 * and returns the concatenated result.
 * 
 * @param buffer The original buffer to free.
 * @param buf The new buffer to append.
 * @return The concatenated result of buffer and buf.
 */
char *ft_free(char *buffer, char *buf);

/**
 * @brief Reads from a file descriptor and stores the result.
 * 
 * This function reads from the file descriptor `fd` and stores the read content
 * into the `res` buffer. It will read until the buffer is filled or a newline is found.
 * 
 * @param fd The file descriptor to read from.
 * @param res The buffer to store the result.
 * @return The updated buffer with the read content, or NULL if an error occurred.
 */
char *read_file(int fd, char *res);

/**
 * @brief Moves to the next portion of the buffer after a newline.
 * 
 * This function extracts the content from the buffer after the newline character
 * and returns the remaining string, freeing the old buffer in the process.
 * 
 * @param buffer The buffer to process.
 * @return The remaining part of the buffer after the newline, or NULL if no newline is found.
 */
char *ft_next(char *buffer);

/**
 * @brief Extracts a line from the buffer.
 * 
 * This function extracts the current line from the buffer, ending at either a newline
 * character or the end of the buffer.
 * 
 * @param buffer The buffer to process.
 * @return The extracted line, or NULL if the buffer is empty.
 */
char *ft_line(char *buffer);

/**
 * @brief Reads the next line from a file descriptor.
 * 
 * This function reads the next line from the given file descriptor `fd`. It handles
 * buffer management and returns one line at a time, even if the file is read in chunks.
 * 
 * @param fd The file descriptor to read from.
 * @return The next line from the file, or NULL if there is nothing more to read or an error occurs.
 */
char *get_next_line(int fd);
#endif