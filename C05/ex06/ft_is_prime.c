int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1) // 0 e 1 não são primos
        return (0);
    if (nb == 2 || nb == 3) // 2 e 3 são primos
        return (1);
    if (nb % 2 == 0) // múltiplos de 2 não são primos
        return (0);

    i = 3;
    while (i <= nb / i) // i * i <= nb (evita overflow)
    {
        if (nb % i == 0) // se achar um divisor, não é primo
            return (0);
        i += 2; // testa apenas ímpares
    }
    return (1); // não encontrou divisores → é primo
}
#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
    printf("%d\n", ft_is_prime(2));   // 1
    printf("%d\n", ft_is_prime(3));   // 1
    printf("%d\n", ft_is_prime(4));   // 0
    printf("%d\n", ft_is_prime(17));  // 1
    printf("%d\n", ft_is_prime(18));  // 0
    printf("%d\n", ft_is_prime(1));   // 0
}
