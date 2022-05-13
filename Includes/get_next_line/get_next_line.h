/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:56:54 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:26:49 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

char	*get_next_line(int fd);
size_t	ft_strlen_gnl(const char *s);
void	*ft_memcpy_gnl(void *dst, const void *src, size_t n);
char	*ft_strjoin_gnl(char const *s1, char const *s2);
char	*ft_strdup_gnl(const char *str);
char	*ft_substr_gnl(char const *s, unsigned int start, size_t len);
char	*ft_strchr_gnl(const char *s, int c);
#endif