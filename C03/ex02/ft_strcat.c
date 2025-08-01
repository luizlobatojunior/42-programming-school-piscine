#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    // Avança até o final da string dest
    while (dest[i] != '\0')
        i++;

    // Copia src para o final de dest
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Adiciona o terminador nulo no final
    dest[i] = '\0';

    return dest;
}

int main()
{
    char dest[50] = "Ola, ";
    char src[] = "mundo!";

    printf("Antes: %s\n", dest);
    ft_strcat(dest, src);
    printf("Depois: %s\n", dest);

    return 0;
}
