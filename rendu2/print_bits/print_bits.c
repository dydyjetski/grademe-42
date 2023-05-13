/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:19:17 by dmeurant          #+#    #+#             */
/*   Updated: 2023/05/13 14:19:18 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	int bit;
	
	i = octet;
	bit = 128;
	while (bit > 0)
	{
		if (bit & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		bit >>= 1;
	}
}
