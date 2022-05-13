/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:23 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/12 15:44:19 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	z;
	size_t	y;

	z = 0;
	y = 0;
	while (dst[z] && z < size)
		z++;
	while ((src[y]) && ((z + y + 1) < size))
	{
		dst[z + y] = src[y];
		y++;
	}
	if (z != size)
		dst[z + y] = '\0';
	return (z + ft_strlen(src));
}
