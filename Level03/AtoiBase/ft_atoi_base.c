/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:36:52 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 17:25:58 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12
		|| c == 13 || c == 32)
		return (1);
	return (0);
}

int	ft_isvalid(int c, int baselen)
{
	char	*lcbase = "0123456789abcdef";
	char	*ucbase = "0123456789ABCDEF";
	int		i = 0;

	while (i < baselen)
	{
		if (c == lcbase[i] || c == ucbase[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	res;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while (str[i] && ft_isvalid(str[i], str_base) == 1)
	{
		res = res * str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - 48;
		else if (str[i] >= 'a' && str[i] <= 'f')
			res += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			res += str[i] - 'A' + 10;
		i++;
	}
	return (res * sign);
}

int	main(void)
{
	char	*str = "1ea123bc";

	printf("%d", ft_atoi_base(str, 16));
	return (0);
}