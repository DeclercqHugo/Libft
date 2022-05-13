/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pntr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:03:30 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:37:17 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pntr(unsigned long long int pntr)
{
	int	counter;

	counter = ft_str("0x");
	counter += ft_hexmin(pntr);
	return (counter);
}
