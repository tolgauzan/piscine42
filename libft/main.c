#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	/*printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isascii('1'));
	printf("%d\n", ft_isprint(' '));
	printf("%zu\n", ft_strlen("tolgauzan"));
	*/
	int i = 0;
	int arr[5] = {1, 2, 3, 4, 5};
	int *parr = (int *)ft_memset(arr,5,sizeof(int)* 2);

	while (i < 5)
	{
		printf("%d\n",arr[i]);
		i++;
	}

	
	
	char buff[30];
	ft_bzero(buff, sizeof(buff));
	
	i = 0;
	while (i < sizeof(buff))
	{
		printf("%c", buff[i]);
		i++;
	}

	return 0;

}
