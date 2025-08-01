int ft_sqrt(int nb)
{
    int i;

    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);

    i = 1;
    while (i <= nb / i) // evita overflow
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}
#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
    printf("%d\n", ft_sqrt(16)); // 4
    printf("%d\n", ft_sqrt(10)); // 0
    printf("%d\n", ft_sqrt(1));  // 1
    printf("%d\n", ft_sqrt(0));  // 0
    printf("%d\n", ft_sqrt(25)); // 5
}
