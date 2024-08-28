#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	int	first;

	first = 1;
	while (first < argc)
	{
		ft_putstr(argv[first++]);
		ft_putchar('\n');
	}
	return (0);
}
