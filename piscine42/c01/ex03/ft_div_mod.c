/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:53:29 by tuzan             #+#    #+#             */
/*   Updated: 2024/08/19 14:53:53 by tuzan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
int main()
{
	int num1= 10;
	int num2= 3;
	
	int mod;
	int *p1 = &mod;
	int div;
	int *p2 = &div;
	ft_div_mod(num1,num2,p1,p2);

	printf(" p1 deger %d",mod);
	printf(" p2 deger %d",div);
	return 0;
}
