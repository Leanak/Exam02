/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:40:37 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/06 13:26:20 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	int	res;

	res = 0;
	if (n == -2147483648)
	{	
		write(1, "-2147483648", 11);
		return ;
	}
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

int	ft_sum_prime(int n)
{
	int	i;
	int	res;

	res = 0;
	i = 2;
	while (i <= n)
	{
		if (ft_prime(i) == 1)
			res = res + i;
		i++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*str == 32 || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	int	n;
	int	res;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		if (n < 0)
		{
			write(1, "0", 1);
			exit (1);
		}
		res = ft_sum_prime(n);
		ft_putnbr(res);
	}
	write(1, "\n", 1);
	return (0);
}
