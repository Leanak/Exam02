/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:30:51 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/04 12:44:54 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s1, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s1[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%zu", ft_strcspn(av[1], av[2]));
	return (0);
}