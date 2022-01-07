/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:28:58 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/07 10:38:24 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	z;

	z = 0;
	str = (char *)s;
	while (z < n)
	{
		if ((unsigned char)str[z] == (unsigned char)c)
			return ((char *)s + z);
		z++;
	}
	return (NULL);
}