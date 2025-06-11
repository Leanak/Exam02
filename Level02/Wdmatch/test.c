/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:05:47 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 15:18:08 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wd_match(char *s1, char *s2)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	j = 0;
	while (s1[len])
		len++;
	while (i < len && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (i == len)
		write(1, s1, len);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		wd_match(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}