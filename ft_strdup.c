/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:19 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/07 10:44:11 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	size_t	y;

	y = 0;
	tmp = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!tmp)
		return (NULL);
	while (s1[y])
	{
		tmp[y] = s1[y];
		y++;
	}
	tmp[y] = 0;
	return (tmp);
}