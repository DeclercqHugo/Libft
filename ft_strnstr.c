/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:24:08 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/06 15:24:08 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	z;
	size_t	y;

	z = 0;
	while (z < n && s1[z] != '\0')
	{
		y = 0;
		while (z + y < n && s1[z + y] == s2[y] && s2[y] != '\0')
			y++;
		if (s2[y] == '\0')
			return ((char *)s1 + z);
		z++;
	}
	return (NULL);
}
