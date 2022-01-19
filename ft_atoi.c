/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:28:35 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/01/19 15:47:09 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *str, int *sign)
{
	int	z;

	z = 0;
	while (str[z] == ' ' || (str[z] >= 9 && str[z] <= 13))
		z++;
	if (str[z] == '-' || str[z] == '+')
	{
		if (str[z] == '-')
			*sign = -1;
		z++;
	}
	return (z);
}

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				sign;
	int				z;

	sign = 1;
	res = 0;
	z = 0;
	z = check(str, &sign);
	while (str[z] >= '0' && str[z] <= '9')
	{
		res = res * 10 + str[z] - '0';
		if (res > 9223372036854775807)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		z++;
	}
	return (res * sign);
}
