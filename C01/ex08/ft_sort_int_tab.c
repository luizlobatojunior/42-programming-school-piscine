#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j;
    int temp;

    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int array[] = {5, 2, 8, 1, 3};
    int size = sizeof(array) / sizeof(array[0]);
    int i = 0;

    printf("Array original: ");
    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");

    ft_sort_int_tab(array, size);

    i = 0;
    printf("Array ordenado: ");
    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");

    return 0;
}
