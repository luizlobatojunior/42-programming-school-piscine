int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int minus_count = 0;

    // Ignora espaços em branco
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;

    // Conta sinais + e -
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            minus_count++;
        i++;
    }

    // Se número de '-' for ímpar → número negativo
    if (minus_count % 2 != 0)
        sign = -1;

    // Converte números
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}
#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
    printf("%d\n", ft_atoi(" ---+--+1234ab567")); // -1234
    printf("%d\n", ft_atoi("   ++++---42xyz"));   // -42
    printf("%d\n", ft_atoi("  -+-+-+56"));        // 56
    printf("%d\n", ft_atoi("  ---123"));          // -123
}
