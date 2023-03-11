/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:38:10 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/05 16:57:49 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	check_sort(t_list *stack)
{
	while (stack->next)
	{
		if ((stack->rank) + 1 != stack->next->rank)
			return (0);
		stack = stack->next;
	}
	return (1);
}
