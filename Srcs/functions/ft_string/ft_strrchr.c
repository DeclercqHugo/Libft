/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:39 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 17:35:26 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	z;

	z = ft_strlen((char *)s);
	while (z >= 0)
	{
		if (s[z] == (unsigned char)c)
			return ((char *)s + z);
		z--;
	}
	if ((unsigned char)c == 0)
		return ((char *) s);
	return (0);
}
