int ft_recursive_factorial(int nb)
{
    if (nb < 0) // valores negativos não são válidos
        return 0;
    if (nb == 0 || nb == 1) // caso base
        return 1;
    return nb * ft_recursive_factorial(nb - 1); // chamada recursiva
}

#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()
{
    printf("%d\n", ft_recursive_factorial(5));  // 120
    printf("%d\n", ft_recursive_factorial(0));  // 1
    printf("%d\n", ft_recursive_factorial(-3)); // 0
    return 0;
}
