/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:21:25 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/06 15:21:25 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	z;

	z = 0;
	if (size > 0)
	{
		while (src[z] && z < (size - 1))
		{
			dst[z] = src[z];
			z++;
		}
		dst[z] = 0;
	}
	while (src[z])
		z++;
	return (z);
}
