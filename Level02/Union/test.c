/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:59:18 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 16:09:49 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int				i;
	int				j;
	int				buffer[256] = {0};
	unsigned char	c;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			c = av[1][i];
			if (!buffer[c])
			{
				buffer [c] = 1;
				write(1, &av[1][i], 1);
			}
			i++;
		}
		j = 0;
		while (av[2][j])
		{
			c = av[2][j];
			if (!(buffer[c]))
			{
				buffer[c] = 1;
				write(1, &av[2][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}