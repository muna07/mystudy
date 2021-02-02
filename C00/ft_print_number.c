#include <unistd.h>

void    ft_putchar(char sym)
{
    write(1, &sym, 1);
}

void    ft_print_numbers(void)
{
    char num = '0';

    while (num <= '9')
    {
        ft_putchar(num);
        num++;
    }
}

int main(void)
{
    ft_print_numbers();

    return 0;
}
