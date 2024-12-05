#include "libftprintf.h"

void	ft_putstr(char *s, int *counter)
{
	int	len;

	if (s)
	{
		len = 0;
		while (s[len])
			len++;
		write(1, s, len);
		*counter += len;
	}
}