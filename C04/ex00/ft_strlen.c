int ft_strlen(char *str)
{
    int count = 0;

    while (str[count] != '\0') // enquanto não chegar ao final da string
        count++;

    return count; // retorna o número de caracteres
}
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char palavra1[] = "Ola";
    char palavra2[] = "Hello, World!";
    char palavra3[] = "";

    printf("Tamanho de '%s': %d\n", palavra1, ft_strlen(palavra1));
    printf("Tamanho de '%s': %d\n", palavra2, ft_strlen(palavra2));
    printf("Tamanho de string vazia: %d\n", ft_strlen(palavra3));

    return 0;
}
