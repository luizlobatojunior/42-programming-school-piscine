int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0); // potência negativa retorna 0
    if (power == 0)
        return (1); // qualquer número elevado a 0 é 1 (inclusive 0^0)
    return (nb * ft_recursive_power(nb, power - 1));
}
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
    printf("2^4 = %d\n", ft_recursive_power(2, 4));     // 16
    printf("5^3 = %d\n", ft_recursive_power(5, 3));     // 125
    printf("10^0 = %d\n", ft_recursive_power(10, 0));   // 1
    printf("0^0 = %d\n", ft_recursive_power(0, 0));     // 1 (definido pelo enunciado)
    printf("3^-2 = %d\n", ft_recursive_power(3, -2));   // 0 (potência negativa)
    printf("(-2)^3 = %d\n", ft_recursive_power(-2, 3)); // -8

    return 0;
}

