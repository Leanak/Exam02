/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:41:09 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/04 14:48:22 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	int		len2;
	char	tmp;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	len2 = len -1;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len2 - i];
		str[len2 - i] = tmp;
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s", ft_strrev(av[1]));
	return (0);
}