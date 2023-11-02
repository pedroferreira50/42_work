#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_putstr(char *str)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		length += ft_putchar(str[i]);
		i++;
	}
	return (length);
}

static void findformat(char c,va_list args, int *length)
{
	void *ptr;

	if (c == 'd')
        *length += ft_putnbr_base(va_arg(args, int), "0123456789");
	else if (c == 'c')
        *length += ft_putchar((char)va_arg(args, int));
	else if (c == 's')
        *length += ft_putstr((char *)va_arg(args, char *));
	else if (c == 'p')
	{
		ptr = va_arg(args, void *);
		if ((unsigned long long)ptr == 0)
		{
			*length += ft_putstr("(nil)");
			return ;
		}
		*length += ft_putchar('0');
    	*length += ft_putchar('x');
    	*length += ft_putnbr_base_ul((unsigned long long)ptr, "0123456789abcdef");
	}
	else if (c == 'i')
       *length += ft_putnbr_base(va_arg(args, int), "0123456789");
	else if (c == 'u')
        *length += ft_putnbr_base_u(va_arg(args, int), "0123456789");
	else if (c == 'x')
        *length += ft_putnbr_base_u((unsigned long long)va_arg(args, int), "0123456789abcdef");
	else if (c == 'X')
        *length += ft_putnbr_base_u((unsigned long long)va_arg(args, int), "0123456789ABCDEF");
	else if (c == '%')	
        *length += ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	va_list args;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			findformat(str[i], args, &length);
		}
		else
			length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
/*
int main(void)
{
	char *str = "Hello, world!";
    int num = 42;
	printf("int %d custom \n",ft_printf(" %u ", -1));
	printf("int %d origin \n",printf(" %u ", -1));
	return (0);
}
*/
/*
int main(void)
{
    char *str = "Hello, world!";
    int num = 42;

    printf("Testing my printf implementation:\n");
    printf("%d", ft_printf("Character: %c\n", 'A'));
    ft_printf("String: %s\n", str);
    ft_printf("Decimal (d): %d\n", num);
    ft_printf("Pointer (p): %p\n", &num);
    ft_printf("Integer (i): %i\n", num);
    ft_printf("Unsigned (u): %u\n", num);
    ft_printf("Lowercase Hex (x): %x\n", num);
    ft_printf("Uppercase Hex (X): %X\n", num);
    ft_printf("Percentage (%%): %%\n");

    printf("\nResults using standard printf:\n");
    printf("Character: %c\n", 'A');
    printf("String: %s\n", str);
    printf("Decimal (d): %d\n", num);
    printf("Pointer (p): %p\n", &num);
    printf("Integer (i): %i\n", num);
    printf("Unsigned (u): %u\n", num);
    printf("Lowercase Hex (x): %x\n", num);
    printf("Uppercase Hex (X): %X\n", num);
    printf("Percentage (%%): %%\n");

    return 0;
}
*/