/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:15:29 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 10:17:10 by lenakach         ###   ########.fr       */
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
	int	a = 23;
	int	b = 2;

	printf("Mon a : %d et mon b %d", a, b);
	ft_swap(&a, &b);
	printf("Mon a : %d et mon b %d", a, b);
	return (0);
}