#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

void    ft_dec_to_hex(unsigned long n, const char *base, int *counter);
void	ft_print_nbr(int n, int *counter);
void	ft_print_unsigned_dec(unsigned int n, int *counter);
int         ft_printf(const char *format, ...);
void	ft_putchar(char c, int *counter);
void	ft_putstr(char *s, int *counter);

#endif