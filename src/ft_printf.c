#include "libftprintf.h"

static void	conversion_cases(char conversion_char, va_list args, int *counter)
{
	const char base_low[16] = "0123456789abcdef";
	const char base_up[16] = "0123456789ABCDEF";

	if (conversion_char == 'c')
		ft_putchar((char)va_arg(args, int), counter);
	else if (conversion_char == 's')
		ft_putstr(va_arg(args, char *), counter);
	else if (conversion_char == 'p')
	{
		ft_putstr("0x", counter);
		ft_dec_to_hex(va_arg(args, unsigned long), base_low, counter);
	}
	else if (conversion_char == 'd' || conversion_char == 'i')
		ft_print_nbr(va_arg(args, int), counter);
	else if (conversion_char == 'u')
		ft_print_unsigned_dec(va_arg(args, unsigned int), counter);
	else if (conversion_char == 'x')
		ft_dec_to_hex((unsigned long)va_arg(args, unsigned int), base_low, counter);
	else if (conversion_char == 'X')
		ft_dec_to_hex((unsigned long)va_arg(args, unsigned int), base_up, counter);
	else if (conversion_char == '%')
		ft_putchar('%', counter);
}

int	ft_printf(const char *format, ...)
{
	int		counter;
	va_list	args;

	va_start(args, format);
	counter = 0;
	if (!format)
		return (0);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			conversion_cases(*format, args, &counter);
		}
		else
			ft_putchar((char)*format, &counter);
		format++;
	}
	va_end(args);
	return (counter);
}
// --- %x ---
//The %x format specifier in printf is used to print an unsigned integer in lowercase hexadecimal format. 
//It expects an input of type unsigned int
/*#include <stdio.h>

int main() {
    int original, custom;

    // Test case 1: Character
    printf("=== Character Test ===\n");
    original = printf("Original  printf : %c\n", 'A');
    custom = ft_printf("Custom ft_printf : %c\n", 'A');
    printf("Original return: %d, Custom return: %d\n\n", original, custom);

    // Test case 2: String
    printf("=== String Test ===\n");
    original = printf("Original  printf : %s\n", "Hello, World!");
    custom = ft_printf("Custom ft_printf : %s\n", "Hello, World!");
    printf("Original return: %d, Custom return: %d\n\n", original, custom);

    // Test case 3: Pointer
    printf("=== Pointer Test ===\n");
    int x = 42;
    original = printf("Original  printf : %p\n", (void *)&x);
    custom = ft_printf("Custom ft_printf : %p\n", (void *)&x);
    printf("Original return: %d, Custom return: %d\n\n", original, custom);

    // Test case 4: Decimal and Integer
    printf("=== Decimal and Integer Test ===\n");
    original = printf("Original  printf : %d, %i\n", -42, 42);
    custom = ft_printf("Custom ft_printf : %d, %i\n", -42, 42);
    printf("Original return: %d, Custom return: %d\n\n", original, custom);


    // Test case 5: Unsigned
    printf("=== Unsigned Test ===\n");
    original = printf("Original  printf : %u\n", -4294967295u);
    custom = ft_printf("Custom ft_printf : %u\n", -4294967295u);
    printf("Original return: %d, Custom return: %d\n\n", original, custom);

    // Test case 6: Hexadecimal (lowercase and uppercase)
    printf("=== Hexadecimal Test ===\n");
    original = printf("Original  printf : %x, %X\n", 255, 255);
    custom = ft_printf("Custom ft_printf : %x, %X\n", 255, 255);
    printf("Original return: %d, Custom return: %d\n\n", original, custom);

    // Test case 7: Percent Sign
    printf("=== Percent Sign Test ===\n");
    original = printf("Original  printf : %%\n");
    custom = ft_printf("Custom ft_printf : %%\n");
    printf("Original return: %d, Custom return: %d\n\n", original, custom);

    // Test case 8: Mixed Formats
    printf("=== Mixed Formats Test ===\n");
    original = printf("Original  printf : Char: %c, String: %s, Pointer: %p, Dec: %d, Hex: %x, %%\n",
                      'C', "ft_printf", &x, 123, 255);
    custom = ft_printf("Custom ft_printf : Char: %c, String: %s, Pointer: %p, Dec: %d, Hex: %x, %%\n",
                      'C', "ft_printf", &x, 123, 255);
    printf("Original return: %d, Custom return: %d\n\n", original, custom);

    // Edge case: Empty string
    printf("=== Empty String Test ===\n");
    original = printf("Original  printf : %s\n", "\0");
    custom = ft_printf("Custom ft_printf : %s\n", "\0");
    printf("Original return: %d, Custom return: %d\n\n", original, custom);

    return 0;
}*/