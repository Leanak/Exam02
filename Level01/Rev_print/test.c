/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:53:52 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/03 12:58:22 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*start;

	if (ac == 2)
	{
		start = av[1];
		while (*av[1])
			av[1]++;
		while (av[1] >= start)
			write(1, av[1]--, 1);
		write(1, "\n", 1);
	}
}