/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:16 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 20:19:40 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordsize(const char *s, char c)
{
	int	z;

	z = 0;
	while (s[z] && s[z] != c)
		z++;
	return (z);
}

static int	ft_wordcount(const char *s, char c)
{
	int	z;

	z = 0;
	while (s[z])
	{
		while (s[z]== c)
			z++;
		if (s[z])
			z++;
		s += ft_wordsize(s, c);
	}
	return (z);
}

static void	*ft_freeall(char **tab, int z)
{
	while (z--)
		free(tab[z]);
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		y;
	int		z;

	if (!s)
		return (NULL);
	tab = (char **)ft_calloc(sizeof(char *), (ft_wordcount(s, c) + 1));
	z = -1;
	if (!tab)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			y = ft_wordsize(s, c);
			tab[++z] = (char *)ft_calloc(sizeof(char), y + 1);
			if (!tab[z])
				return (ft_freeall(tab, z));
			tab[z] = ft_memcpy(tab[z], s, y);
			s += y;
		}
	}
	return (tab);
}
