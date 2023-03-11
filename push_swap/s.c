/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:31:36 by asidqi            #+#    #+#             */
/*   Updated: 2023/02/26 14:45:12 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sb(t_list **root, char f)
{
	t_list	*first;
	t_list	*third;

	if (ft_lstsize(*root) <= 1)
		return ;
	first = *root;
	third = (*root)->next->next;
	*root = (*root)->next;
	(*root)->next = first;
	(*root)->next->next = third;
	if (f == 'b')
		ft_putstr_fd("sb\n", 1);
}

void	sa(t_list **root, char f)
{
	t_list	*a;
	t_list	*b;

	if (ft_lstsize(*root) <= 1)
		return ;
	a = (*root);
	b = (*root)->next->next;
	(*root) = (*root)->next;
	(*root)->next = a;
	(*root)->next->next = b;
	if (f == 'a')
		ft_putstr_fd("sa\n", 1);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a, 'X');
	sb(stack_b, 'X');
	ft_putstr_fd("ss\n", 1);
}
