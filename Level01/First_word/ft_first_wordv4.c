/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_wordv4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:52:29 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/31 14:07:30 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *str)
{
	if (*str == '\t' || *str == 32)
		return (1);
	return (0);
}

void	ft_first_word(char *str)
{
	while (*str)
	{
		while (ft_check(str) == 0)
		{
			ft_putchar(*str++);
			if (*str == '\0')
				return ;
		}
		return ;
	}
}

int	main(void)
{
	char	*str = " ";

	ft_first_word(str);
	return (0);
}