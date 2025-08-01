#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;
	int		k;

	// Ordenação tipo bubble sort, sem função strcmp nem for
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			// comparar argv[i] e argv[j] manualmente
			k = 0;
			while (argv[i][k] && argv[j][k] && argv[i][k] == argv[j][k])
				k++;
			// se argv[i][k] > argv[j][k], troca
			if ((unsigned char)argv[i][k] > (unsigned char)argv[j][k])
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}

	// imprimir argumentos ordenados, um por linha, só com write
	i = 1;
	while (i < argc)
	{
		k = 0;
		while (argv[i][k])
		{
			write(1, &argv[i][k], 1);
			k++;
		}
		write(1, "\n", 1);
		i++;
	}

	return (0);
}
