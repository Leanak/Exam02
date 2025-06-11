/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:50:10 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/09 15:58:48 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	octet = (octet >> 4) | (octet << 4);
	return (octet);
}

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
	int	i;
	int	bit;

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
	unsigned char	octet;

	octet = 33;
	print_bits(octet);
	printf("\n");
	octet = reverse_bits(octet);
	print_bits(octet);
	printf("\n");
	octet = swap_bits(octet);
	print_bits(octet);
	printf("\n");
	return (0);
	
}