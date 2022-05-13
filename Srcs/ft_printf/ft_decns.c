/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decns.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:47:02 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:37:04 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_decns(unsigned int decns)
{
	int	counter;

	counter = 0;
	if (decns > 9)
		counter += ft_decns(decns / 10);
	counter += ft_char(decns % 10 + '0');
	return (counter);
}
