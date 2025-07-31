int ft_iterative_factorial(int nb)
{
    int result;

    if (nb < 0)
        return (0); // Fatorial não definido para números negativos
    if (nb == 0 || nb == 1)
        return (1); // 0! = 1 e 1! = 1
    
    result = 1;
    while (nb > 1)
    {
        result *= nb;
        nb--;
    }
    return (result);
}
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
    int i;

    i = -5;
    printf("%d! = %d\n", i, ft_iterative_factorial(i));

    i = 0;
    printf("%d! = %d\n", i, ft_iterative_factorial(i));

    i = 1;
    printf("%d! = %d\n", i, ft_iterative_factorial(i));

    i = 5;
    printf("%d! = %d\n", i, ft_iterative_factorial(i));

    i = 10;
    printf("%d! = %d\n", i, ft_iterative_factorial(i));

    return (0);
}
