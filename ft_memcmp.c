/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:00 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/07 10:38:37 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	z;

	z = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (z < n)
	{
		if (str1[z] != str2[z])
			return ((unsigned char)str1[z] - (unsigned char)str2[z]);
		z++;
	}
	return (0);
}