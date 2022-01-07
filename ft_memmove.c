/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:04 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/07 12:40:18 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	z;
	if (dst || src)
	{
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
	return (dst);
}