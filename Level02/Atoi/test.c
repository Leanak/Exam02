/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:16:15 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 11:22:40 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i])
	{
		while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12 
			|| str[i] == 13 || str[i] == 32)
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
			res = res * 10 + (str[i] - 48);
			i++;
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