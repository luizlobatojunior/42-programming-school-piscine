#include <stdio.h>
#include <string.h> // Para strlcat original

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int dest_len = 0;
    unsigned int src_len = 0;

    while (dest[dest_len] != '\0')
        dest_len++;

    while (src[src_len] != '\0')
        src_len++;

    if (size <= dest_len)
        return size + src_len;

    i = dest_len;
    while (src[j] != '\0' && i + 1 < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return dest_len + src_len;
}

int main(void)
{
    char dest1[20] = "Olá, ";
    char dest2[20] = "Olá, ";
    char src[] = "mundo!";
    unsigned int size = 15;

    unsigned int ret1 = strlcat(dest1, src, size);
    unsigned int ret2 = ft_strlcat(dest2, src, size);

    printf("strlcat original: %s (retorno: %u)\n", dest1, ret1);
    printf("ft_strlcat:      %s (retorno: %u)\n", dest2, ret2);

    return 0;
}
