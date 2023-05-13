/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:01:26 by dmeurant          #+#    #+#             */
/*   Updated: 2023/05/13 13:01:27 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int i;
	int stock;
	
	i = 0;
	stock = 0;
	if (!tab)
		return 0;
	while(i < len)
	{
		if (tab[i] > stock)
			stock = tab[i];
		i++;
	}
	return stock;
}
