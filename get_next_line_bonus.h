/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:34:18 by ccolin            #+#    #+#             */
/*   Updated: 2024/05/19 21:25:18 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

// # define BUFFER_SIZE 1000

void	*ft_memset(void *b, int c, size_t len);
char	*ft_find_leftover(char *leftover);
int		ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_read_from_file(int fd, char *leftover);
char	*ft_find_line(char *next_line);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*get_next_line(int fd);

#endif