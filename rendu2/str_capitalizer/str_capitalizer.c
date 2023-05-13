/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:30:14 by dmeurant          #+#    #+#             */
/*   Updated: 2023/05/13 14:30:15 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return 1;
	else
		return 0;
}

void str_capitalizer(char *str)
{
	int i;
	
	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i = 1;
	}
	else
	{
		write(1, &str[i], 1);
		i = 1;
	}
	while(str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (is_space(str[i - 1]) == 1 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main (int argc, char **argv)
{
	int i = 1;
	
	if (argc == 1)
	{
		write(1, "\n", 1);
		return 0;
	}
	else
	{
		while (argv[i])
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	return 0;
}
