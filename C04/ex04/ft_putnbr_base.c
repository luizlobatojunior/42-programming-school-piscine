#include <unistd.h>

void ft_putnbr_base(int nbr, char *base)
{
    int i, j;
    int base_len = 0;
    unsigned int n;

    // Calcula tamanho da base e valida caracteres
    while (base[base_len])
        base_len++;

    if (base_len < 2)
        return;

    i = 0;
    while (i < base_len)
    {
        if (base[i] == '+' || base[i] == '-')
            return;
        j = i + 1;
        while (j < base_len)
        {
            if (base[i] == base[j])
                return;
            j++;
        }
        i++;
    }

    // Trata número negativo
    if (nbr < 0)
    {
        write(1, "-", 1);
        n = (unsigned int)(-(long)nbr);
    }
    else
        n = (unsigned int)nbr;

    // Imprime recursivamente
    if (n >= (unsigned int)base_len)
        ft_putnbr_base((int)(n / base_len), base);
    write(1, &base[n % base_len], 1);
}
#include <unistd.h>

// Declaração da função (pode estar em um header, mas aqui deixo explícito)
void ft_putnbr_base(int nbr, char *base);

int main(void)
{
    ft_putnbr_base(42, "0123456789");           // decimal: 42
    write(1, "\n", 1);

    ft_putnbr_base(-42, "0123456789");          // decimal negativo: -42
    write(1, "\n", 1);

    ft_putnbr_base(255, "01");                   // binário: 11111111
    write(1, "\n", 1);

    ft_putnbr_base(255, "0123456789ABCDEF");    // hexadecimal: FF
    write(1, "\n", 1);

    ft_putnbr_base(-255, "poneyvif");            // base "poneyvif"
    write(1, "\n", 1);

    ft_putnbr_base(123, "0");                    // base inválida, não imprime nada
    write(1, "\n", 1);

    ft_putnbr_base(123, "01234+6789");           // base inválida (+ presente)
    write(1, "\n", 1);

    return 0;
}
