/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:12:05 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/04 17:21:13 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				stock;

	i = 0;
	stock = tab[0];
	while (i < len)
	{
		if (tab[i] > stock)
			stock = tab[i];
		i++;
	}
	return (stock);
}

int	main(void)
{
	int				tab[4] = {2, 0, 6, 7};
	unsigned int	len;

	len = 4;
	printf("%d", max(tab, len));
	return (0);
}