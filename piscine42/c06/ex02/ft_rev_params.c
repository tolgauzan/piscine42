/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:22:21 by tuzan             #+#    #+#             */
/*   Updated: 2024/08/29 11:25:40 by tuzan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
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
	int	prg_name;

	prg_name = 0;
	last = argc - 1;
	while (last > prg_name)
	{
		ft_putstr(argv[last--]);
		ft_putchar('\n');
	}
	return (0);
}
