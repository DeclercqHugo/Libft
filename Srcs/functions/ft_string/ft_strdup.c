/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:19 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 17:28:04 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	size_t	z;

	z = 0;
	tmp = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!tmp)
		return (NULL);
	while (s1[z])
	{
		tmp[z] = s1[z];
		z++;
	}
	tmp[z] = 0;
	return (tmp);
}
