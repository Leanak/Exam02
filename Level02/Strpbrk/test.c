/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:06:38 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 12:13:23 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(const char *str, const char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*str = "Hello";
	const char	*charset = "Abce";

	printf("%s", ft_strpbrk(str, charset));
	return (0);
}