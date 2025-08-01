char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (to_find[0] == '\0') // se to_find for vazio
        return str;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] != '\0' && str[i + j] == to_find[j])
        {
            j++;
            if (to_find[j] == '\0') // substring encontrada
                return &str[i];
        }
        i++;
    }
    return 0; // não encontrou
}
