#include <unistd.h>

void	ft_print_combn(int n)
{
	int comb[10];
	int i;
	int j;

	if (n < 1 || n > 9)
		return ;

	// Inicializa a combinação: comb[i] = i
	i = 0;
	while (i < n)
	{
		comb[i] = i;
		i++;
	}

	while (1)
	{
		// Imprime a combinação atual
		i = 0;
		while (i < n)
		{
			write(1, &"0123456789"[comb[i]], 1);
			i++;
		}

		// Se primeira posição chegou ao limite, encerra
		if (comb[0] == 10 - n)
			break ;

		write(1, ", ", 2);

		// Incrementa a combinação da direita para esquerda
		i = n - 1;
		while (i >= 0)
		{
			if (comb[i] < 9 - (n - 1 - i))
			{
				comb[i]++;
				j = i + 1;
				while (j < n)
				{
					comb[j] = comb[j - 1] + 1;
					j++;
				}
				break ;
			}
			i--;
		}
	}
}

int main(void)
{
    ft_print_combn(2);  // Você pode mudar o valor de n para testar outras combinações
    return 0;
}
