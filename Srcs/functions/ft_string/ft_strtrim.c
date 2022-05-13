/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:40 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 17:36:06 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	ft_char_in_set(char c, char const *set)
{
	size_t	z;

	z = 0;
	while (set[z])
	{
		if (set[z] == c)
			return (1);
		z++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	z;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	z = 0;
	while (start < end)
		str[z++] = s1[start++];
	str[z] = 0;
	return (str);
}
