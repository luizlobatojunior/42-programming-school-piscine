#include <unistd.h>
#include <stdio.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	print_solution(int *board)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = board[i] + '0';
		ft_putchar(c);
		i++;
	}
	ft_putchar('$');
	ft_putchar('\n');
}

static int	is_safe(int *board, int col, int row)
{
	int i = 0;

	while (i < col)
	{
		if (board[i] == row)
			return 0;
		if ((board[i] - row) == (i - col) || (row - board[i]) == (i - col))
			return 0;
		i++;
	}
	return 1;
}

static void	solve(int col, int *board, int *count)
{
	int row = 0;

	if (col == 10)
	{
		print_solution(board);
		(*count)++;
		return;
	}
	while (row < 10)
	{
		if (is_safe(board, col, row))
		{
			board[col] = row;
			solve(col + 1, board, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int board[10];
	int count = 0;

	solve(0, board, &count);
	return count;
}

int main(void)
{
	int total = ft_ten_queens_puzzle();
	printf("Total de soluções: %d\n", total);
	return 0;
}
