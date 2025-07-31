#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main ()
{
	int mod, div;
	ft_div_mod(10, 3, &div, &mod);
	printf("div : %d, mod: %d", div, mod);
}
