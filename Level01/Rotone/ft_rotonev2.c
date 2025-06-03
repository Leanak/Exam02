/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotonev2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:30:53 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/01 17:35:39 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str < 'z') || (*str >= 'A' && *str < 'Z'))
		{	
			*str += 1;
			write(1, str, 1);
		}
		else if (*str == 'z' || *str == 'Z')
		{	
			*str -= 25;
			write(1, str, 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}