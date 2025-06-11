/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:09:27 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 10:13:14 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char	*res;

	res = s2;
	while (*s1)
		*s2++ = *s1++;
	return (res);
}

int	main(void)
{
	char	*s1 = "Hello Caaaaa salut";
	char	s2[] = "HHeyyyyy";

	printf("Ma s1 avant : %s", s1);
	printf("Ma s2 avant : %s", s2);
	printf("Ma s2 apres %s", ft_strcpy(s1, s2));
	return (0);
}