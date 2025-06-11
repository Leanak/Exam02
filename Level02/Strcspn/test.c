/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:25:36 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 11:30:56 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(const char *str, const char *set)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (set[j])
		{
			if (str[i] == set[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*str = "Hello";
	char	*set = "";

	printf("%zu", ft_strcspn(str, set));
	return (0);
}