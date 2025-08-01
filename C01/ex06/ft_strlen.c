#include <stdio.h>

int ft_strlen(char *str)
{
    int count = 0;
    while (str[count] != '\0')
        count++;
    return count;
}

int main()
{
    char texto[] = "Olá, mundo!";
    int tamanho = ft_strlen(texto);

    printf("A string \"%s\" tem %d caracteres.\n", texto, tamanho);
    return 0;
}
