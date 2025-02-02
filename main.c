#include "libftprintf.h"

int main(void)
{
    int int_val = 42;
    unsigned int uint_val = 4294967295;
    char *str = "Hello, world!";
    char c = 'A';
    void *ptr = &int_val;

    // Testing each format specifier
    ft_printf("Character: %c\n", c);
    ft_printf("String: %s\n", str);
    ft_printf("Pointer: %p\n", ptr);
    ft_printf("Decimal (int): %d\n", int_val);
    ft_printf("Integer (i): %i\n", int_val);
    ft_printf("Unsigned: %u\n", uint_val);
    ft_printf("Hexadecimal (lowercase): %x\n", uint_val);
    ft_printf("Hexadecimal (uppercase): %X\n", uint_val);
    ft_printf("Percent sign: %%\n");

    return 0;
}
