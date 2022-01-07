/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:36 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/07 10:48:46 by hdeclerc         ###   ########.fr       */
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