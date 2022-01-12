/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:39 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/12 15:45:39 by hdeclerc         ###   ########.fr       */
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
