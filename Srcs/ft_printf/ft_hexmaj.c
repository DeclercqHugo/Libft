/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexmaj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:58:39 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:37:09 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexmaj(unsigned int hexmaj)
{
	int	counter;

	counter = 0;
	if (hexmaj < 10)
		counter += ft_dec(hexmaj);
	else if (hexmaj < 16)
		counter += ft_char(hexmaj + 55);
	else
	{
		counter += ft_hexmaj(hexmaj / 16);
		counter += ft_hexmaj(hexmaj % 16);
	}
	return (counter);
}
