/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:50:03 by fasharif          #+#    #+#             */
/*   Updated: 2022/06/01 17:37:42 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		i *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	return (i);
}
