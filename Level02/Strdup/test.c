/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:00:29 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 12:06:05 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s2;
	int		i;

	i = 0;
	while (src[i])
		i++;
	s2 = malloc ((i + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (src[i])
	{
		s2[i] = src[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int	main(void)
{
	char	*s1 = "HOla QUe tal";

	printf("%s", ft_strdup(s1));
	return (0);
}