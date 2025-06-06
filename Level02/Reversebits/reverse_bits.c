/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:12:34 by lenakach          #+#    #+#             */
/*   Updated: 2025/06/05 12:08:58 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i;
	unsigned char	res;

	res = 0;
	i = 8;
	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);
}

int	main(void)
{
	unsigned char	bit;
	unsigned char	octet;
	unsigned char	res;
	int				i;

	octet = 50;
	i = 8;
	bit = 0;
	res = reverse_bits(octet);
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
}