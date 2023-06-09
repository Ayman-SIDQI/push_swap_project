/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:29:04 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/13 15:14:28 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

char	*ft_substr(char const *s, int start, int len)
{
	int		k;
	char	*init;

	k = 0;
	if (s)
	{
		if (start >= ft_strlen2(s))
			return ((char *)ft_calloc(1, 1));
		if (len >= ft_strlen2(s) - start)
			return (ft_strdup(s + start));
		init = (char *)malloc (sizeof(char) * (len + 1));
		if (!init)
			return (0);
		while (k < len)
		{
			init[k] = s[start];
			k++;
			start++;
		}
		init[k] = '\0';
		return (init);
	}
	return (0);
}

static int	wordcounter(const char *s, char dm)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != dm && (s[i + 1] == dm || s[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}

static char	**allocator(const char *s, char **ret, char dm, size_t wc)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == dm)
			i++;
		while (s[i + count] != dm && s[i + count])
			count++;
		if (j < wc)
		{
			ret[j] = ft_substr(s, i, count);
			j++;
		}
		i = i + count;
		count = 0;
	}
	return (ret);
}

char	**ft_split(char const *so, char dm)
{
	char	**ret;
	size_t	wcount;

	if (!so)
		return (0);
	wcount = wordcounter(so, dm);
	ret = (char **)malloc(sizeof(char *) * (wcount + 1));
	if (!ret)
		return (0);
	ret = allocator(so, ret, dm, wcount);
	ret[wcount] = NULL;
	return (ret);
}
