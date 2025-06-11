/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:52:16 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/10 15:20:10 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{

	if (ac == 2)
	{
		while (is_space(*av[1]) == 1)
			av[1]++;
		while (is_space(*av[1]) == 0 && *av[1])
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}