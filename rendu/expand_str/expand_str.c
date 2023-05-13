/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:10:36 by dmeurant          #+#    #+#             */
/*   Updated: 2023/05/13 13:10:38 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_strlen (char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return i;
}

void expand_str (char *str)
{
	int i;
	
	i = 0;
	while (str[i] <= ' ' && str[i])
		i++;
	while (str[i])
	{
		if (str[i] > ' ')
		{
			write(1, &str[i], 1);
			i++;
		}
		while (str[i] <= ' ' && str[i])
			i++;
		if (str[i - 1] <= ' ' && str[i - 1] && ft_strlen(str) > i)
			write(1, "   ", 3);
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
		expand_str(argv[1]);
	return 0;
}
