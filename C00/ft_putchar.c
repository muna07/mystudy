#include <unistd.h>

void    ft_putchar(char sym)
{
    write(1, &sym, 1);
}

int main(void)
{
    ft_putchar('B');

    return 0;
}
