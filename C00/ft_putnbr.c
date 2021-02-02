#include <unistd.h>

void    ft_putchar(char sym)
{
    write(1, &sym, 1);
}

void    ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putnbr(nbr / 10);
        ft_putchar('8');
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nbr);
    }
    else
    {
        if (nbr > 9)
        {
            ft_putnbr(nbr / 10);
        }
        ft_putchar(48 + nbr % 10);
    }
}

int main(void)
{
    ft_putnbr(21);
    ft_putchar('\n');
    ft_putnbr(2121);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(2147483647);

    return 0;
}
