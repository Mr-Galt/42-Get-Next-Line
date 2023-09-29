/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:05:54 by mheinke           #+#    #+#             */
/*   Updated: 2023/09/26 12:14:59 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <limits.h>

# define MAX_FD 1024
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*get_string(char *str);
char	*read_the_line(char *str);
char	*free_and_null(char *buff1, char *buff2);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char *s1, char *s2);

#endif