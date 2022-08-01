/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:07:11 by fasharif          #+#    #+#             */
/*   Updated: 2022/05/27 13:42:25 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		r;
	char	c;

	i = 0;
	r = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (r == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (r == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			r = 1;
		else
			r = 0;
		i++;
	}
	return (str);
}
