/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:38:10 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/15 12:02:20 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	check_sort(t_list *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
	{
		if ((stack->rank) + 1 != stack->next->rank)
			return (0);
		stack = stack->next;
	}
	return (1);
}
