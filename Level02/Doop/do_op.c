/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:36:39 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/03 16:43:02 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", atoi(av[1]) + atoi(av[3]));
		else if (av[2][0] == '-')
			printf("%d", atoi(av[1]) - atoi(av[3]));
		else if (av[2][0] == '*')
			printf("%d", atoi(av[1]) * atoi(av[3]));
		else if (av[2][0] == '/')
			printf("%d", atoi(av[1]) / atoi(av[3]));
		else if (av[2][0] == '%')
			printf("%d", atoi(av[1]) % atoi(av[3]));
	}
	printf("\n");
	return (0);
}