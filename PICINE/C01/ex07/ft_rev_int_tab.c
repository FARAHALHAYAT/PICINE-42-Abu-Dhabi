/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:43:14 by fasharif          #+#    #+#             */
/*   Updated: 2022/05/24 18:44:53 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i < size / 2)
	{
		t = tab[i];
		tab[i] = tab [size - 1 - i];
		tab[size - 1 - i] = t;
		i++;
	}
}
