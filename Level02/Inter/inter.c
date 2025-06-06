/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:03:15 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/04 16:22:25 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int				i;
	int				j;
	unsigned char	c;
	int				buffer[256] = {0};

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			c = av[1][i];
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && !(buffer[c]))
				{
					write(1, &av[1][i], 1);
					buffer[c] = 1;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
