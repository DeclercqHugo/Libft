/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:21:58 by marvin            #+#    #+#             */
/*   Updated: 2022/01/06 11:21:58 by marvin           ###   ########.fr       */
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
