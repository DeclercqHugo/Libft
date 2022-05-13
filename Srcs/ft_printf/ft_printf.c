/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:56:03 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:37:52 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_params(const char *str, int counter, va_list ap)
{
	if (*str == 'c' && str)
		counter += ft_char(va_arg(ap, int));
	else if (*str == 's' && str)
		counter += ft_str(va_arg(ap, char *));
	else if ((*str == 'd' || *str == 'i') && str)
		counter += ft_dec(va_arg(ap, int));
	else if (*str == 'u' && str)
		counter += ft_decns(va_arg(ap, unsigned int));
	else if (*str == 'x' && str)
		counter += ft_hexmin(va_arg(ap, unsigned int));
	else if (*str == 'X' && str)
		counter += ft_hexmaj(va_arg(ap, unsigned int));
	else if (*str == 'p' && str)
		counter += ft_pntr(va_arg(ap, unsigned long long int));
	else
		counter += ft_char(*str);
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	int		counter;
	va_list	ap;

	counter = 0;
	va_start(ap, str);
	if (!str)
		return (counter);
	while (*str)
	{
		if (*str == '%' && str)
		{
			str++;
			counter = ft_params(str, counter, ap);
		}
		else
			counter += ft_char(*str);
		str++;
	}
	va_end(ap);
	return (counter);
}
