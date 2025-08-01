#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    // argv[0] é o nome do programa
    while (argv[0][i] != '\0')
        i++;
    write(1, argv[0], i);
    write(1, "\n", 1);
    return 0;
}
