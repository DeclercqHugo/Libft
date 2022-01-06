/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:23:19 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/06 15:23:19 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	z;

	z = 0;
	while (s1[z] != '\0' && s1[z] == s2[z] && z < n - 1)
		z++;
	return ((unsigned char)s1[z] - (unsigned char)s2[z]);
}
