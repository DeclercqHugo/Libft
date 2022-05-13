/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:41:28 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:37:25 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_str(char *str)
{
	int	counter;

	counter = 0;
	if (!str)
	{
		counter += ft_str("(null)");
		return (counter);
	}
	while (str[counter])
	{
		ft_char(str[counter]);
		counter++;
	}
	return (counter);
}
