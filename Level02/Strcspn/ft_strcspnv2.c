/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspnv2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:45:18 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/04 13:06:20 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strcspn(char *s1, char *reject)
{
	const char	*start;
	const char	*r2;

	start = s1;
	while (*s1++)
	{
		r2 = reject;
		while (*r2)
		{
			if (*s1 == *r2++)
				return (s1 - start);
		}
	}
	return (s1 - start);
}


int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%zu", ft_strcspn(av[1], av[2]));
	return (0);
}