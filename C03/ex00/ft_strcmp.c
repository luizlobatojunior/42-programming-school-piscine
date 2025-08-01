#include <stdio.h>
#include <string.h>

// Protótipo da sua função
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;

    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(void)
{
    char *a = "Hello";
    char *b = "Hello";
    char *c = "Hellp";
    char *d = "Hell";

    printf("Comparando \"%s\" e \"%s\":\n", a, b);
    printf("strcmp: %d\n", strcmp(a, b));
    printf("ft_strcmp: %d\n\n", ft_strcmp(a, b));

    printf("Comparando \"%s\" e \"%s\":\n", a, c);
    printf("strcmp: %d\n", strcmp(a, c));
    printf("ft_strcmp: %d\n\n", ft_strcmp(a, c));

    printf("Comparando \"%s\" e \"%s\":\n", a, d);
    printf("strcmp: %d\n", strcmp(a, d));
    printf("ft_strcmp: %d\n\n", ft_strcmp(a, d));

    return 0;
}


