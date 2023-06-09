/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:06:23 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/13 15:01:39 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

char	*get_next_line(int fd);
int		ft_strlen(char *s);
char	*mon_strdup(char *s1);
int		ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*sd_stash(char *line);
char	*readfile(int fd, char *stash);
int		newline_stop(char *str);
#endif
