/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:02 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 19:51:26 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	z;
	char	*y;
	char	*x;

	z = 0;
	y = (char *)dst;
	x = (char *)src;
	if (dst || src)
	{
		while (z < n)
		{
			y[z] = x[z];
			z++;
		}
		return (y);
	}
	return (y);
}
