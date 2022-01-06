/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:49:07 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/06 15:49:07 by hdeclerc         ###   ########.fr       */
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
