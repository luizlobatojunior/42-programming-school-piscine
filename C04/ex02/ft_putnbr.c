#include <unistd.h>

void ft_putnbr(int nb)
{
    char c;

    if (nb == -2147483648) // caso especial: INT_MIN
    {
        write(1, "-2147483648", 11);
        return;
    }

    if (nb < 0) // número negativo
    {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb >= 10) // se tiver mais de um dígito
        ft_putnbr(nb / 10);

    c = (nb % 10) + '0'; // converte dígito para caractere
    write(1, &c, 1);
}
#include <unistd.h>

void ft_putnbr(int nb);

int main(void)
{
    ft_putnbr(42);
    write(1, "\n", 1);

    ft_putnbr(-42);
    write(1, "\n", 1);

    ft_putnbr(0);
    write(1, "\n", 1);

    ft_putnbr(2147483647); // INT_MAX
    write(1, "\n", 1);

    ft_putnbr(-2147483648); // INT_MIN
    write(1, "\n", 1);

    return 0;
}
