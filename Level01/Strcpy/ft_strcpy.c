/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:20:36 by lenakach          #+#    #+#             */
/*   Updated: 2025/05/31 15:33:46 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s2, char *s1)
{
	char	*start = s2;
	while (*s1)
	{	
		*s2 = *s1;
		s2++;
		s1++;
	}
	*s2 = '\0';
	return (start);
}

int	main(void)
{
	char	*s1 = "   ok 123";
	char	s2[100] = "";

	printf("%s", ft_strcpy(s2, s1));
	return (0);
}