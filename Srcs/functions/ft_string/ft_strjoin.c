/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:22 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 17:30:34 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	z;
	size_t	y;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(
			sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	z = 0;
	y = 0;
	while (s1[z])
	{
		str[y++] = s1[z];
		z++;
	}
	z = 0;
	while (s2[z])
	{
		str[y++] = s2[z];
		z++;
	}
	str[y] = 0;
	return (str);
}
