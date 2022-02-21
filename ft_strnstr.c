/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:37 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 20:20:18 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	z;
	size_t	y;

	z = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[z] && z < n)
	{
		y = 0;
		while (s1[z + y] == s2[y] && z + y < n)
		{
			if (s2[y] == 0)
				return ((char *)s1 + z);
			y++;
		}
		if (s2[y] == 0)
			return ((char *)s1 + z);
		z++;
	}
	return (NULL);
}
