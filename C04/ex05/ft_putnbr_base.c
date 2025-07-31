#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		j;
	int		base_len;
	long	nb;
	char	c;
	int		valid;

	// Validar base: tamanho, caracteres + e -, e repetição
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return;
	i = 0;
	valid = 1;
	while (base[i] && valid)
	{
		if (base[i] == '+' || base[i] == '-')
			valid = 0;
		j = i + 1;
		while (base[j] && valid)
		{
			if (base[i] == base[j])
				valid = 0;
			j++;
		}
		i++;
	}
	if (!valid)
		return;

	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
	c = base[nb % base_len];
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(42, "01");
	write(1, "\n", 1);

	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n", 1);

	ft_putnbr_base(42, "poneyvif");
	write(1, "\n", 1);

	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(42, "0"); // base inválida - nada é impresso
	write(1, "\n", 1);

	return (0);
}
