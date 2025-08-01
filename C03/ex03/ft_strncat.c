#include <stdio.h>
#include <string.h> // Para comparar com strncat original

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;

    // Encontrar o final de dest
    while (dest[i] != '\0')
        i++;

    // Copiar até nb caracteres de src para dest
    while (j < nb && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

    // Finalizar com '\0'
    dest[i + j] = '\0';

    return dest;
}

int main(void)
{
    char dest1[50] = "Ola, ";
    char dest2[50] = "Ola, ";
    char src[] = "Mundo!";
    unsigned int nb = 3;

    printf("Original strncat: %s\n", strncat(dest1, src, nb));
    printf("Minha ft_strncat: %s\n", ft_strncat(dest2, src, nb));

    return 0;
}
