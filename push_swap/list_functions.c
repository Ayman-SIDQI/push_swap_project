/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:35:49 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/07 12:49:23 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = value;
	new->next = NULL;
	return (new);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*save;

	save = 0;
	while (*lst)
	{
		save = (*lst)->next;
		(*lst)->content = 0;
		(*lst)->rank = 0;
		free(*lst);
		*lst = save;
	}
}

int	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (1);
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
	return (0);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
