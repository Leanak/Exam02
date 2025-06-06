/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_power2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:54:41 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/04 17:11:40 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_power_2(int a)
{
	int	test;

	test = 1;
	while (test <= a)
	{
		if (test == a)
			return (1);
		test = test * 2;
	}
	return (0);
}


int	main(void)
{
	int	a = 0;

	printf("%d", ft_is_power_2(a));
	return (0);
}