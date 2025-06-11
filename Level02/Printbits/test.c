/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:02:27 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 14:08:39 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char	res;

	i = 8;
	while (i--)
	{
		res = (octet >> i & 1) + 48;
		write(1, &res, 1);
	}
}	

int	main(void)
{
	unsigned char	octet = 2;

	print_bits(octet);
	return (0);
}