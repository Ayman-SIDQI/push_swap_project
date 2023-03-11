/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:30:40 by asidqi            #+#    #+#             */
/*   Updated: 2023/02/25 19:53:18 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rb(t_list **stack_a, char letter)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	tmp = (*stack_a);
	tmp1 = (*stack_a)->next;
	(*stack_a) = tmp1;
	ft_lstlast(*stack_a)->next = tmp;
	tmp->next = NULL;
	if (letter == 'a')
		ft_putstr_fd("ra\n", 1);
	else if (letter == 'b')
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra_rb(stack_a, 'X');
	ra_rb(stack_b, 'X');
	ft_putstr_fd("rr\n", 1);
}

void	rra_rrb(t_list **stack_a, char letter)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	tmp1 = (*stack_a);
	while ((*stack_a)->next != NULL)
	{
		if ((*stack_a)->next->next == NULL)
			tmp = ((*stack_a));
		*stack_a = (*stack_a)->next;
	}
	(*stack_a)->next = tmp1;
	(tmp)->next = NULL;
	if (letter == 'a')
		ft_putstr_fd("rra\n", 1);
	else if (letter == 'b')
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra_rrb(stack_a, 'X');
	rra_rrb(stack_b, 'X');
	ft_putstr_fd("rrr\n", 1);
}
