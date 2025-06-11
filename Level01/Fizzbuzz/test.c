/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 09:58:57 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 10:06:25 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	int	res;

	res = 0;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n; 
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	if (n >= 0 && n <= 9)
	{
		res = n + 48;
		write(1, &res, 1);
	}
}


int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
			write(1, "Fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "Fizz", 4);
		else if (i % 5 == 0)
			write(1, "Buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}