/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:59:30 by fasharif          #+#    #+#             */
/*   Updated: 2022/06/03 20:00:20 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	new = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (new == NULL)
		return (0);
	while (min < max)
	{
		new[i] = min;
		min++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main()
{
	int *x;
	int i = 0;
	int min = 1;
	int max = 12;
	x = ft_range(min, max);
		while (i < max - min)
		{
			printf("%d ", x[i]);
			i++;
		}
		printf("\n");
}
*/
