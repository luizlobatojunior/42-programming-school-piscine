#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int len;

    i = argc - 1;
    while (i > 0)
    {
        len = 0;
        // calcular o comprimento da string argv[i]
        while (argv[i][len])
            len++;
        // escrever a string argv[i]
        write(1, argv[i], len);
        // escrever uma nova linha
        write(1, "\n", 1);
        i--;
    }
    return 0;
}
