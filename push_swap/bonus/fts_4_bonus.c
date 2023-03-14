/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_4_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:37:34 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/14 14:25:39 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strlen2(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	len;
	size_t	i;

	len = ft_strlen2(s1);
	i = 0;
	new = (char *)malloc (sizeof(char) * (len + 1));
	if (!new)
		return (0);
	new[len] = '\0';
	while (i != len)
	{
		new[i] = s1[i];
		i++;
	}
	return (new);
}
