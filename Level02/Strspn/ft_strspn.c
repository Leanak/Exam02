/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:06:50 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/04 13:27:01 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strspn(char *s1, char *accept)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	while (s1[i])
	{
		j = 0;
		check = 0;
		while (accept[j])
		{
			if (s1[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return (i);
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%zu", ft_strspn(av[1], av[2]));
	return (0);
}