/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:50:00 by dmeurant          #+#    #+#             */
/*   Updated: 2023/05/15 13:50:01 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	
	while (str[i])
		i++;
	return i;
}

void hidenp (char *s1, char *s2)
{
	int i;
	int count;
	int lens1;
	
	i = 0;
	count = 0;
	lens1 = ft_strlen(s1);
	while (s2[i])
	{
		if (s1[count] && s2[i] == s1[count])
			count++;	
		i++;
	}
	if (count == lens1)
	{
		write(1, "1", 1);
		write(1, "\n", 1);
	}
	else
	{	
		write(1, "0", 1);
		write(1, "\n", 1);
	}
}

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	else
		hidenp(argv[1], argv[2]);
	return 0;
}
