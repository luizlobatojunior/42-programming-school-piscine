#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    char buffer[12]; // suficiente para -2147483648 + '\0'
    int i = 0;
    int is_negative = 0;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }

    if (nb < 0)
    {
        is_negative = 1;
        nb = -nb;
    }

    // Transforma número em string ao contrário
    do {
        buffer[i++] = (nb % 10) + '0';
        nb /= 10;
    } while (nb > 0);

    if (is_negative)
        buffer[i++] = '-';

    // Imprime string ao contrário
    while (--i >= 0)
        ft_putchar(buffer[i]);
}
int main(void)
{
    ft_putnbr(12345); // imprime 12345
    ft_putchar('\n');
    ft_putnbr(-98);   // imprime -98
    ft_putchar('\n');
    return 0;
}

