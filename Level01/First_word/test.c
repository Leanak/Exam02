/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:54:51 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/03 12:06:58 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] == 32 || *av[1] == 9)
			av[1]++;
		while (*av[1] != 32 && *av[1] != 9 && *av[1])
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}