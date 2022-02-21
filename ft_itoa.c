/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:28:57 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/02/21 16:35:14 by hdeclerc         ###   ########.fr       */
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
	int		z;
	int		y;
	long	nbr;

	nbr = n;
	z = 0;
	y = ft_nbsize(nbr);
	res = (char *)malloc(sizeof(char) * (y + 1));
	if (res)
	{
		if (nbr < 0)
		{
			res[z] = '-';
			z++;
			nbr *= -1;
		}
		while (y - z)
		{
			res[z] = '0' + ft_getunit(nbr, y - z - 1);
			z++;
		}
		res[z] = '\0';
	}
	return (res);
}
