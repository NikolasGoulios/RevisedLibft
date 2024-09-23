/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:19:10 by ngoulios          #+#    #+#             */
/*   Updated: 2024/09/23 16:22:59 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	lc ;

	lc = (unsigned char)c;
	while (*s)
	{
		if (*s == lc)
			return ((char *) s);
		s++;
	}
	if (lc == '\0')
		return ((char *) s);
	return (0);
}
