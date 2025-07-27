#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
	int n[3];

	n[0] = 0;
	while(n[0] <= 7)
	{
		n[1] = n[0] + 1;
		while(n[1] <= 8)
		{
			n[2] = n[1] + 1;
			while(n[2] <= 9)
			{
				ft_putchar(n[0] + '0');
                		ft_putchar(n[1] + '0');
                		ft_putchar(n[2] + '0');
                		if(!(n[0] == 7 && n[1] == 8 && n[2] == 9))
                		{
					ft_putchar(',');
                			ft_putchar(' ');
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}

int main()
{
	ft_print_comb();
}
