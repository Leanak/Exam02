/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:44:43 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 13:56:40 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ispower(int n)
{
	int	p;

	p = 1;
	while (p <= n)
	{
		if (p == n)
			return (1);
		p = 2 * p;
	}
	return (0);
}

int	main(void)
{
	int	n;

	n = 128;
	printf("%d", ft_ispower(n));
	return (0);
}