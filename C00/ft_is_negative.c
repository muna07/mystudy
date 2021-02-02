#include <unistd.h>

void    ft_putchar(char sym)
{
    write(1, &sym, 1);
}

void    ft_is_negative(int num)
{
    if (num < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}

int main(void)
{
    ft_is_negative(15);
    ft_is_negative(-15);

    return 0;
}
