#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') // enquanto não for o final da string
    {
        write(1, &str[i], 1); // escreve um caractere no stdout
        i++;
    }
}
#include <unistd.h>

void ft_putstr(char *str);

int main(void)
{
    ft_putstr("Ola, Mundo!");
    write(1, "\n", 1); // quebra de linha

    ft_putstr("Teste da funcao ft_putstr");
    write(1, "\n", 1);

    return 0;
}
