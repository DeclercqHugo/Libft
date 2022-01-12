/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:28:57 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/12 18:00:32 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbsize(long n)
{
	int		size;

	size = 1;
	while (n / 10)
	{
		n /= 10;
		size++;
	}
	if (n < 0)
		size++;
	return (size);
}

static long	ft_getunit(long n, int unit)
{
	while (unit--)
		n /= 10;
	return (n % 10);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		j;
	long	nbr;

	nbr = n;
	i = 0;
	j = ft_nbsize(nbr);
	res = (char *)malloc(sizeof(char) * (j + 1));
	if (res)
	{
		if (nbr < 0)
		{
			res[i] = '-';
			i++;
			nbr *= -1;
		}
		while (j - i)
		{
			res[i] = '0' + ft_getunit(nbr, j - i - 1);
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}
