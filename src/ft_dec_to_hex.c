#include "libftprintf.h"

void	ft_dec_to_hex(unsigned long n, const char *base, int *counter)
{
	if ((n / 16) != 0)
		ft_dec_to_hex(n / 16, base, counter);
	ft_putchar(base[n % 16], counter);
}