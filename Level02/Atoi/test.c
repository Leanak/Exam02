/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:08:45 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/04 12:15:58 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str)
	{
		if (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == 32 || *str == '\r')
			str++;
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign = -sign;
			str++;
		}
		if (*str >= '0' && *str <= '9')
		{
			res = res * 10 + (*str - 48);
			str++;
		}
	}
	return (res * sign);
}


int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_atoi(av[1]));
	return (0);
}