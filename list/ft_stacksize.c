/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacksize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:15:03 by ngoulios          #+#    #+#             */
/*   Updated: 2024/11/14 19:22:11 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	ft_stacksize(t_stack_node **a)
{
	t_stack	*tmp;
	int				index;

	tmp = *a;
	index = 0;
	while (tmp)
	{
		tmp = tmp ->next;
		index++;
	}
	return (index);
}