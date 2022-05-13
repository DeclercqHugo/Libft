/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:57:43 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:37:33 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlen_gnl(const char *s)
{
	size_t	z;

	z = 0;
	while (s[z])
		z++;
	return (z);
}

char	*ft_substr_gnl(char const *s, unsigned int start, size_t len)
{
	size_t	z;
	char	*str;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	z = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (z < len && s[start])
	{
		str[z] = s[start];
		z++;
		start++;
	}
	str[z] = '\0';
	return (str);
}

void	*ft_memcpy_gnl(void *dst, const void *src, size_t n)
{
	size_t	z;

	if (!src && !dst)
		return (0);
	z = 0;
	while (n)
	{
		((unsigned char *)dst)[z] = ((unsigned char *)src)[z];
		z++;
		n--;
	}
	return (dst);
}

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*new;

	if (s1 && s2)
	{
		l1 = 0;
		while (s1[l1])
			l1++;
		l2 = 0;
		while (s2[l2])
			l2++;
		new = (char *)malloc((l1 + l2 + 1) * sizeof(char));
		if (!new)
			return (NULL);
		ft_memcpy(new, s1, l1);
		ft_memcpy(&new[l1], s2, l2);
		new[l1 + l2] = '\0';
		return (new);
	}
	return (NULL);
}

char	*ft_strdup_gnl(const char *s)
{
	char	*cpy;
	int		size;

	size = 0;
	while (s[size])
		size++;
	cpy = (char *)malloc(((size + 1) * sizeof(char)));
	if (!cpy)
		return (NULL);
	cpy = ft_memcpy(cpy, s, size + 1);
	return (cpy);
}
