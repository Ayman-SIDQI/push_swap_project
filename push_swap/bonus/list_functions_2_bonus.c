/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions_2_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:42:26 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/14 14:42:05 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*curr;

	curr = lst;
	i = 0;
	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
