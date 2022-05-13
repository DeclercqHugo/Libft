/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:46:23 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/03/11 14:01:48 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include   <stdio.h>
# include   <stdarg.h>
# include   <unistd.h>

int	ft_char(char c);
int	ft_str(char *str);
int	ft_pntr(unsigned long long int pntr);
int	ft_hexmin(unsigned long long int hexmin);
int	ft_hexmaj(unsigned int hexmaj);
int	ft_decns(unsigned int decns);
int	ft_dec(int dec);
int	ft_printf(const char *str, ...);

#endif