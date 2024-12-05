/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:38:07 by apavlopo          #+#    #+#             */
/*   Updated: 2024/12/05 15:38:35 by apavlopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_dec_to_hex(unsigned long n, const char *base, int *counter);
void	ft_print_nbr(int n, int *counter);
void	ft_print_ptr(unsigned long n, const char *base, int *counter);
void	ft_print_unsigned_dec(unsigned int n, int *counter);
int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *counter);
void	ft_putstr(char *s, int *counter);

#endif
