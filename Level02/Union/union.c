/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:56:16 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/06 12:07:24 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int				buffer[256] = {0};
	int				i = 0;
	unsigned char	c;

	if (ac == 3)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if (!buffer[c])
			{
				buffer[c] = 1;
				write(1, &c, 1);
			}
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			c = av[2][i];
			if (!buffer[c])
			{
				buffer[c] = 1;
				write(1, &c, 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
