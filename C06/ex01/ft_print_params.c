#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1; // Começa em 1 para ignorar argv[0]
    while (i < argc)
    {
        j = 0;
        // Escreve caractere por caractere do argumento atual
        while (argv[i][j] != '\0')
            j++;
        write(1, argv[i], j);
        write(1, "\n", 1);
        i++;
    }
    return 0;
}
