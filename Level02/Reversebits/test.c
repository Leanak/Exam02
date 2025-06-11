/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:09:05 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 15:03:14 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	bit = 0;
	while (i--)
	{
		bit = (octet >> i & 1) + 48;
		write(1, &bit, 1);
	}
}


unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	bit = 0;
	while (i--)
	{
		bit = (bit << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (bit);
}


int	main(void)
{
	unsigned char	octet = 2;

	print_bits(octet);
	write(1, "\n", 1);
	octet = reverse_bits(octet);
	print_bits(octet);
	return (0);
}