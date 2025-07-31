int ft_fibonacci(int index)
{
    if (index < 0)
        return -1;
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}
#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Fibonacci(%d) = %d\n", i, ft_fibonacci(i));
    }

    // Teste com índice negativo
    printf("Fibonacci(-5) = %d\n", ft_fibonacci(-5));

    return 0;
}
