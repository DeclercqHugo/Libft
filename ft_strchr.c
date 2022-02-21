/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:18 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 20:17:20 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		z;
	char	*y;

	z = 0;
	y = (char *)s;
	while (s[z])
	{
		if (s[z] == (char)c)
			return (y[z]);
		z++;
	}
	if (s[z] == (char)c)
		return (y[z]);
	return (NULL);
}
