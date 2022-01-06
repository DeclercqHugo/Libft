/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:10:32 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/06 15:10:32 by hdeclerc         ###   ########.fr       */
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
