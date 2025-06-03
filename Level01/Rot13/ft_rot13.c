/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:20:38 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/01 17:29:55 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot13(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
		{
			*str += 13;
			write(1, str, 1);
		}
		else if ((*str > 'm' && *str <= 'z') || (*str > 'M' && *str <= 'Z'))
		{	
			*str -= 13;
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
		ft_rot13(av[1]);
	write(1, "\n", 1);
	return (0);
}