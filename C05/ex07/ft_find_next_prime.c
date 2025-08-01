#include <stdio.h>

int ft_find_next_prime(int nb)
{
    int i;

    if (nb < 2)
        return (2);
    while (1)
    {
        i = 2;
        while (i * i <= nb)
        {
            if (nb % i == 0)
                break;
            i++;
        }
        if (i * i > nb)
            return (nb);
        nb++;
    }
}

int main(void)
{
    int nums[] = { -5, 0, 1, 2, 3, 4, 10, 14, 17, 18, 20, 100 };
    int size = sizeof(nums) / sizeof(nums[0]);
    int i;

    for (i = 0; i < size; i++)
    {
        printf("Próximo primo de %d é %d\n", nums[i], ft_find_next_prime(nums[i]));
    }
    return 0;
}
