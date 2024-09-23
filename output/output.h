/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:37:15 by ngoulios          #+#    #+#             */
/*   Updated: 2024/09/23 17:12:44 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_H
# define OUTPUT_H

void	ft_putchar_fd(char c, int fd);
int		ft_putchar(char c);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_putnbr(int n);
void	ft_putstr_fd(char *str, int fd);
int		ft_putstr(char *str);
int		ft_printf(const char *str, ...);
int		ft_putaddress(void *format);
int		ft_puthexa(unsigned long n, char format);
int		ft_putunsigned(unsigned int n);

#endif