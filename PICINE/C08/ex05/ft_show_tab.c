/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:26:46 by fasharif          #+#    #+#             */
/*   Updated: 2022/06/07 18:58:26 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"
//#include "../ex04/ft_str_to_tab.c"

void	ft_putstr(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putchar(nb / 10);
		ft_putchar(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (per[i].str != '\0')
	{
		ft_putchar(per[i].str);
		write(1, "\n", 1);
		ft_putchar(per[i].size);
		write(1, "\n", 1);
		ft_putchar(per[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
