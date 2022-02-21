/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:41 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 17:41:40 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	z;
	char	*str;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	z = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (z < len && s[start])
	{
		str[z] = s[start];
		z++;
		start++;
	}
	str[z] = '\0';
	return (str);
}
