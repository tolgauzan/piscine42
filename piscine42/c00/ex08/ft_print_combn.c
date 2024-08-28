#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *arr, int n)
{
	int	i;
	bool	low;

	i = 1;
	low = 1;
	while (i < n)
	{
		if (arr[i - 1] >= arr[i])
			low = 0;
		i++;
	}
	if(low)
	{
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + 48);
		if(arr[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}


void	ft_print_combn(int n)
{
	int	i;
	int arr[n];

	i = 0;
	while (i < n)
		arr[n++] = 0;
	while (arr[0] <= (10 - n) && n > 0 && n < 10)
	{
		print(arr, n);
		arr[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (arr[i] > 9)
			{
				arr[i - 1]++;
				arr[i] = 0;
			}
			i--;
		}
	}
}		
