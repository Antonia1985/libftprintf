#include "libftprintf.h"

void	ft_print_unsigned_dec(unsigned int n, int *counter)
{
	char			c;
	unsigned int	max;

	max = 4294967295;
	if (n == max)
		ft_putstr("4294967295", counter);
	else if (n == 0)
		ft_putchar('0', counter);
	else
	{
		c = '\0';
		if ((n / 10) != 0)
			ft_print_unsigned_dec(n / 10, counter);
		c = '0' + (n % 10);
		ft_putchar(c, counter);
	}
}