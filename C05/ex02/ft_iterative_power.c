int ft_iterative_power(int nb, int power)
{
    int result;
    int i;

    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    
    result = 1;
    i = 0;
    while (i < power)
    {
        result *= nb;
        i++;
    }
    return (result);
}

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
    printf("2^0  = %d\n", ft_iterative_power(2, 0));   // 1
    printf("2^1  = %d\n", ft_iterative_power(2, 1));   // 2
    printf("2^4  = %d\n", ft_iterative_power(2, 4));   // 16
    printf("3^3  = %d\n", ft_iterative_power(3, 3));   // 27
    printf("5^2  = %d\n", ft_iterative_power(5, 2));   // 25
    printf("0^0  = %d\n", ft_iterative_power(0, 0));   // 1
    printf("2^-2 = %d\n", ft_iterative_power(2, -2));  // 0
    return 0;
}
