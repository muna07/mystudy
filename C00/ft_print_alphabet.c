#include <unistd.h>

void    ft_putchar(char sym)
{
    write(1, &sym, 1);
}

void ft_print_reverse_alphabet(void)
{
    char str = 'Z';

    while (str >= 'A')
    {
        ft_putchar(str);
        str--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();

    return 0;
}
