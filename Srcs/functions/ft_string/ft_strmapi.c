/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:28 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 17:31:03 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	z;

	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (0);
	z = 0;
	while (str[z])
	{
		str[z] = f(z, str[z]);
		z++;
	}
	return (str);
}
