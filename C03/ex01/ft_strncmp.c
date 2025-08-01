#include <stdio.h>
#include <string.h> // para strncmp original

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    if (n == 0)
        return (0);
    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "Hellp";
    unsigned int n = 5;

    printf("strncmp   : %d\n", strncmp(s1, s2, n));
    printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));

    // Outros testes
    printf("\n--- Testes extras ---\n");
    printf("ft_strncmp(\"abc\", \"abc\", 3) = %d\n", ft_strncmp("abc", "abc", 3));
    printf("ft_strncmp(\"abc\", \"abd\", 2) = %d\n", ft_strncmp("abc", "abd", 2));
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3));
    printf("ft_strncmp(\"abc\", \"abcde\", 5) = %d\n", ft_strncmp("abc", "abcde", 5));
    printf("ft_strncmp(\"\", \"\", 1) = %d\n", ft_strncmp("", "", 1));
    printf("ft_strncmp(\"abc\", \"\", 3) = %d\n", ft_strncmp("abc", "", 3));

    return 0;
}
