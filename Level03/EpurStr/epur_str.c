/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:11:01 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/06 15:29:02 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while ((str[i] == 32 || str[i] == 9) && str[i] != '\0')
		i++;
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 9)
			space = 1;
		if (str[i] != 32 && str[i] != 9)
		{
			if (space == 1)
				write(1, " ", 1);
			space = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}