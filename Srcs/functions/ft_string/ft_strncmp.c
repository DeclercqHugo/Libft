/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:36 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 17:41:41 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			z;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	z = 0;
	while (ptr_s1[z] && ptr_s2[z] && z < n && ptr_s1[z] == ptr_s2[z])
		z++;
	if (z == n)
		return (0);
	return (ptr_s1[z] - ptr_s2[z]);
}
