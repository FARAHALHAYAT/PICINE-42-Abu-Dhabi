/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:13:03 by fasharif          #+#    #+#             */
/*   Updated: 2022/06/02 13:51:40 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	while (*argv[0] && argc)
		write(1, argv[0]++, 1);
	write(1, "\n", 1);
	return (0);
}
