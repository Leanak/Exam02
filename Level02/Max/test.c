/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:57:08 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 14:01:43 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_max(int *array, unsigned int len)
{
	unsigned int	i;
	int res;

	i = 0;
	res = array[0];
	while (i < len)
	{
		if (array[i] > res)
			res = array[i];
		i++;
	}
	return (res);
}


int	main(void)
{
	int	array[4] = {35566, 35, 256, 77};

	printf("%d", ft_max(array, 4));
	return (0);
}