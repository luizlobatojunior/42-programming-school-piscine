#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array original: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");

    ft_rev_int_tab(array, size);

    printf("Array invertido: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}
