/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:56:34 by fasharif          #+#    #+#             */
/*   Updated: 2022/05/31 21:11:25 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (i > i * nb)
		return (0);
	else if (power > 1)
		return (i * ft_recursive_power(nb, power - 1));
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (i);
}
