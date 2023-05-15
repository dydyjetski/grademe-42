/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:23:11 by dmeurant          #+#    #+#             */
/*   Updated: 2023/05/15 13:23:13 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void camel_to_snake(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			write(1, "_", 1);
			str[i] += 32;
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}


int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	else
		camel_to_snake(argv[1]);
}
