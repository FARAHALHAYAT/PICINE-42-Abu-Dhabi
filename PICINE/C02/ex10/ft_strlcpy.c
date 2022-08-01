/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:22:23 by fasharif          #+#    #+#             */
/*   Updated: 2022/05/29 15:38:42 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (src[j] != '\0')
		j++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
/*int main()
{
	char arr[]="iopiu";
	char desti[5];
	int	o;
	o = 0;
	int siz  = 5;
	int x = ft_strlcpy(desti, arr, siz);
	while(desti[o] != '\0')
	{
		printf("%c", desti[o]);
		o++;
	}
	printf("\n%d", x);
}*/