/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:22:21 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 12:30:10 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int				i = 0;
	int				j;
	unsigned char	c; 
	int				buffer[256] = {0};

	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				c = av[1][i];
				if (av[1][i] == av[2][j] && buffer[c] == 0)
				{
					buffer[c] = 1;
					write(1, &c, 1);
				}
				j++;
			}
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}