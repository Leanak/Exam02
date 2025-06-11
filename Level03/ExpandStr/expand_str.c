/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:30:07 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/06 15:35:26 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while (str[i] == 32 || str[i] == 9)
		i++;
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 9)
			space = 1;
		if (str[i] != 32 && str[i] != 9)
		{
			if (space == 1)
				write(1, "   ", 3);
			space = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 2)
		expand_str(av[1]);
	write(1, "\n", 1);
}