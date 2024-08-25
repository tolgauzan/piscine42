/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:15:09 by tuzan             #+#    #+#             */
/*   Updated: 2024/08/19 15:15:10 by tuzan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a= 5;
	int b= 6;

 		ft_swap(&a,&b);
		printf("a nın yeni degeri %d",a);
		printf("b nin yeni degeri %d",b);

		return 0;
} 
