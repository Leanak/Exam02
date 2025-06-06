/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:52:56 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/05 13:41:25 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		const char	*s1 = av[1];
		const char	*s2 = av[2];
		int	i;
		int	len;
		int	j;

		j = 0;
		i = 0;
		len = 0;
		while (s1[len])
			len++;
		while (i < len && *s2)
		{
			if (s1[i] == s2[j++])
				i++;
		}
		if (i == len)
			write(1, s1, len);
	}
	write(1, "\n", 1);
	return (0);
}