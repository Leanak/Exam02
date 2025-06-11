/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:31:23 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 11:38:20 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(char *str, char *set)
{
	char	*start = str;
	char	*s2;

	while (*str)
	{
		s2 = set;
		while (*s2)
		{
			if (*str == *s2)
				return (str - start);
			s2++;
		}
		str++;
	}
	return (str - start);
}

int	main(void)
{
	char	*str = "Hbya";
	char	*set = "abc";

	printf("%zu", ft_strcspn(str, set));
	return (0);
}