/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:02 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/22 11:04:56 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	z;

	z = 0;
	if (dst || src)
	{
		while (z < n)
		{
			*(char *)(dst + z) = *(char *)(src + z);
			z++;
		}
		return (dst);
	}
	return (dst);
}
