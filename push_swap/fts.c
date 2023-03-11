/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:25:13 by asidqi            #+#    #+#             */
/*   Updated: 2023/02/23 13:56:55 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_isdigit(char *c)
{
	int	i;

	i = 0;
	while ((c[i] >= '0' && c[i] <= '9') || (c[i] == '+') || (c[i] == '-'))
		i++;
	if (c[i] == '\0')
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	size_t	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

int	ft_iszerostring(char *c)
{
	int	i;

	i = 0;
	if ((c[i] == '+') || (c[i] == '-'))
		i++;
	while (c[i] == '0')
		i++;
	if (c[i] == '\0')
		return (1);
	return (0);
}

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
