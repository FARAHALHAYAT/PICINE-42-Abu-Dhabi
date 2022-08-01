/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:17:06 by fasharif          #+#    #+#             */
/*   Updated: 2022/05/31 17:37:14 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	i;

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, &"214783648", 1);
	}
	else if (nb < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(nb / (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		i = nb % 10 + '0';
		write(1, &i, 1);
	}
}
int main(void)
{
ft_putnbr(42);
}
