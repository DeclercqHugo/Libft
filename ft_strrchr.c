/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:24:22 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/06 15:24:22 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	z;

	z = ft_strlen(s);
	if (c == 0)
		return ((char *)s + z);
	while (z >= 0)
	{
		if (s[z] == c)
			return ((char *)s + z);
		z--;
	}
	return (NULL);
}
