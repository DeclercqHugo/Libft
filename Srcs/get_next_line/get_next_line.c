/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:36:36 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:38:19 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strchr_gnl(const char *s, int c)
{
	int	z;

	z = 0;
	while (s[z])
	{
		if (s[z] == (char)c)
			return ((char *)(s + z));
		z++;
	}
	if (s[z] == (char)c)
		return ((char *)(s + z));
	return (NULL);
}

static void	get_free(char **tmp)
{
	free(*tmp);
	*tmp = NULL;
}

static char	*parsing_line(char **head)
{
	char	*start;
	char	*end;
	char	*tmp;

	end = ft_strchr(*head, '\n');
	if (!**head)
	{
		get_free(head);
		return (NULL);
	}
	if (end)
	{
		start = ft_substr(*head, 0, (end - *head) + 1);
		tmp = *head;
		*head = ft_strdup(end + 1);
		get_free(&tmp);
	}
	else
	{
		start = ft_strdup(*head);
		get_free(head);
	}
	return (start);
}

static char	*get_each(int fd, char *buffer, char **head)
{
	int		current_read;
	char	*tmp;

	current_read = 1;
	while (!(ft_strchr(*head, '\n')) && current_read > 0 && *head)
	{
		current_read = read(fd, buffer, BUFFER_SIZE);
		if (current_read == -1)
		{
			get_free(&buffer);
			get_free(head);
			return (NULL);
		}
		buffer[current_read] = 0;
		tmp = *head;
		*head = ft_strjoin(tmp, buffer);
		get_free(&tmp);
	}
	get_free(&buffer);
	return (*head);
}

char	*get_next_line(int fd)
{
	static char	*head[FD_MAX];
	char		*current_line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FD_MAX)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	if (!head[fd])
		head[fd] = ft_strdup("");
	head[fd] = get_each(fd, buffer, &head[fd]);
	if (!head[fd])
		return (NULL);
	current_line = parsing_line(&head[fd]);
	return (current_line);
}
