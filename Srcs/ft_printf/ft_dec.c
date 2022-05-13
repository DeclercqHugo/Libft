/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:28:04 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:37:00 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dec(int dec)
{
	int	counter;

	counter = 0;
	if (dec == -2147483648)
		counter += ft_str("-2147483648");
	else if (dec < 0)
	{
		counter += ft_char('-');
		counter += ft_dec(-dec);
	}
	else if (dec >= 0 && dec <= 9)
		counter += ft_char(dec + '0');
	else if (dec > 9)
	{
		counter += ft_dec(dec / 10);
		counter += ft_dec(dec % 10);
	}
	return (counter);
}
