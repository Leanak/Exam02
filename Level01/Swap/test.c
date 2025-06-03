/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:23:24 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/03 12:24:58 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	a = 20;
	int	b = 6;

	printf("Mon a : %d, Mon b : %d" ,a, b);
	ft_swap(&a, &b);
	printf("Mon a : %d, Mon b : %d" ,a, b);
	return (0);
}