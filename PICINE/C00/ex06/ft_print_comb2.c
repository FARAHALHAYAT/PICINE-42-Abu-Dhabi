/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:16:42 by fasharif          #+#    #+#             */
/*   Updated: 2022/05/24 19:55:40 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	n;

	i = 0;
	n = 1;
	while (i < 99)
	{
		n = i + 1;
		while (n < 100)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			write(1, " ", 1);
			ft_putchar((n / 10) + '0');
			ft_putchar((n % 10) + '0');
			if (i != 98 || n != 99)
			{
				write(1, ", ", 2);
			}
			n++;
		}
		i++;
	}
}
int	main(void)
{
ft_print_comb2();
}
