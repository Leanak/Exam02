/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_wordv1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:43:29 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/31 14:09:42 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char c)
{
	while (c == '\t' || c == 32)
		return (1);
	return (0);
}

void	ft_first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (ft_check(str[i]) == 1)
			i++;
		while (ft_check(str[i]) == 0)
		{
			ft_putchar(str[i]);
			if (str[i + 1] == '\0')
				return ;
			i++;
		}
	return ;
	}
}


int	main(void)
{
	char	*str = "ok 123 456 789";

	ft_first_word(str);
	return (0);
}