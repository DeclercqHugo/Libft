/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:16:07 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/06 15:16:07 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	z;

	if (dst > src)
	{
		z = (int)len - 1;
		while (z >= 0)
		{
			*(char *)(dst + z) = *(char *)(src + z);
			z--;
		}
	}
	else
	{
		z = 0;
		while (z < (int)len)
		{
			*(char *)(dst + z) = *(char *)(src + z);
			z++;
		}
	}
	return (dst);
}
