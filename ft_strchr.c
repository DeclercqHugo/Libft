/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:18 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/07 10:43:59 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	z;

	z = 0;
	while (s[z])
	{
		if (s[z] == c)
			return ((char *)s + 1);
		z++;
	}
	if (!c && s[z] == '\0')
		return ((char *)s + 1);
	return (NULL);
}