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

int	main(int argc, char *argv[])
{
	int	last;
	int prg_name;

	prg_name = 0;
	last = argc - 1;
	while (last > prg_name)
	{
		ft_putstr(argv[last--]);
		ft_putchar('\n');
	}
	return (0);
}
