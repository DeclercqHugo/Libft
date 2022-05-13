/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:13:08 by hdeclerc          #+#    #+#             */
/*   Updated: 2022/05/13 16:13:45 by hdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif