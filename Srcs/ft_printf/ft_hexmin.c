/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:48:25 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:37:13 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexmin(unsigned long long int hexmin)
{
	int	counter;

	counter = 0;
	if (hexmin < 10)
		counter += ft_char(hexmin + '0');
	else if (hexmin < 16)
		counter += ft_char(hexmin + 87);
	else
	{
		counter += ft_hexmin(hexmin / 16);
		counter += ft_hexmin(hexmin % 16);
	}
	return (counter);
}
