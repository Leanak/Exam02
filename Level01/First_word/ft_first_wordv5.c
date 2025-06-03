/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_wordv5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:08:12 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/31 14:05:52 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	unsigned int	i;

	i = 0;
	if (ac < 2)
	{
		write(1, "Missing", 7);
		return (0);
	}
	if (ac > 2)
	{
		write(1, "Too much", 8);
		return (0);
	}
	else
	{
		while (av[1][i] == 32 || av[1][i] == 9)
			i++;
		while ((av[1][i] != 32 && av[1][i] != 9) && av[1][i])
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}