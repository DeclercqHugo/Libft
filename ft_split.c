/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:29:16 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/13 17:47:35 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordsize(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s++ != c)
		i++;
	return (i);
}

static int	ft_wordcount(const char *s, char c)
{
	int	wc;

	wc = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			wc++;
		s += ft_wordsize(s, c);
	}
	return (wc);
}

static void	*ft_freeall(char **tab, int i)
{
	while (i--)
		free(tab[i]);
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		ws;
	int		i;

	if (!s)
		return (NULL);
	tab = (char **)ft_calloc(sizeof(char *), (ft_wordcount(s, c) + 1));
	i = -1;
	if (!tab)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			ws = ft_wordsize(s, c);
			tab[++i] = (char *)ft_calloc(sizeof(char), ws + 1);
			if (!tab[i])
				return (ft_freeall(tab, i));
			tab[i] = ft_memcpy(tab[i], s, ws);
			s += ws;
		}
	}
	return (tab);
}
