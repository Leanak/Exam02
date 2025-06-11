/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:46:20 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 11:59:01 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(char *str, char *accept)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	while (str[i])
	{
		j = 0;
		check = 0;
		while (accept[j])
		{
			if (str[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return (i);
		i++;
	}
	return (i);
}


int	main(void)
{
	char	*str = "Hallo";
	char	*accept = "eolHe";

	printf("%zu", ft_strspn(str, accept));
	return (0);
}