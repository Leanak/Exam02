/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:16:21 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/03 12:20:45 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;
	start = dest;
	while (*src)
		*dest++ = *src++;
	printf("Ma chaine dans la ft : %s\n", start);
	return (start);
}


int	main(void)
{
	char	*s1 = "Hey";
	char	s2[100];

	printf("Ma chaine avant : %s\n", s2);
	printf("Le retour de ma ft %s\n", ft_strcpy(s2, s1));
	printf("La fonction apres dans mon main %s\n", s2);
	return (0);
}
	