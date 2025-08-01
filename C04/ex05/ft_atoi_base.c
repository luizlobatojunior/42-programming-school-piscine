int ft_atoi_base(char *str, char *base)
{
    int i;
    int j;
    int base_len;
    int sign;
    int result;
    int idx;

    // Verificar validade da base (tamanho >= 2)
    base_len = 0;
    while (base[base_len])
        base_len++;
    if (base_len < 2)
        return 0;

    // Verificar se base tem '+' ou '-' ou espaço e caracteres repetidos
    i = 0;
    while (i < base_len)
    {
        if (base[i] == '+' || base[i] == '-' ||
            base[i] == ' ' || base[i] == '\t' || base[i] == '\n' ||
            base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
            return 0;

        j = i + 1;
        while (j < base_len)
        {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }

    // Pular espaços em str
    i = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;

    // Tratar sinais
    sign = 1;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }

    // Converter número
    result = 0;
    while (1)
    {
        // procurar caractere na base
        j = 0;
        idx = -1;
        while (j < base_len)
        {
            if (str[i] == base[j])
            {
                idx = j;
                break;
            }
            j++;
        }
        if (idx == -1)
            break;

        result = result * base_len + idx;
        i++;
    }

    return result * sign;
}
#include <stdio.h>

// Declare a função para evitar warnings
int ft_atoi_base(char *str, char *base);

int main(void)
{
    char *str1 = "   ---1a";
    char *base1 = "0123456789abcdef";
    int res1 = ft_atoi_base(str1, base1);
    printf("Resultado 1: %d\n", res1); // Esperado: -26 (1a hex = 26 decimal)

    char *str2 = "  +1011";
    char *base2 = "01";
    int res2 = ft_atoi_base(str2, base2);
    printf("Resultado 2: %d\n", res2); // Esperado: 11 (binário 1011 = 11 decimal)

    char *str3 = "   -zzz";
    char *base3 = "abcdefghijklmnopqrstuvwxyz";
    int res3 = ft_atoi_base(str3, base3);
    printf("Resultado 3: %d\n", res3); // Esperado: -(25*26^2 + 25*26 + 25) = -17575

    char *str4 = "123";
    char *base4 = "0123456789";
    int res4 = ft_atoi_base(str4, base4);
    printf("Resultado 4: %d\n", res4); // Esperado: 123

    char *str5 = "  -12x";
    char *base5 = "0123456789";
    int res5 = ft_atoi_base(str5, base5);
    printf("Resultado 5: %d\n", res5); // Esperado: -12 (para 'x' não reconhece e para conversão)

    return 0;
}
