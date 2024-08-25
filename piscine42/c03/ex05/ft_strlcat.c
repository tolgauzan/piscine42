/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:11:50 by tuzan             #+#    #+#             */
/*   Updated: 2024/08/25 14:09:11 by tuzan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size == 0 || size <= destlen)
		return (size + srclen);
	i = 0;
	while (src[i] != '\0' && (destlen + i) < (size - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	if ((destlen + i) < size)
		dest[destlen + i] = '\0';
	return (destlen + srclen);
}
