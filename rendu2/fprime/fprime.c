/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:00:58 by dmeurant          #+#    #+#             */
/*   Updated: 2023/05/13 15:01:17 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void fprime (char *nb)
{
	int n;
	int i;
	
	i = 1;
	n = atoi(nb);
	if (n == 1)
	{
		printf("1\n");
		return ;
	}
	if (n < 0)
	{
		printf("\n");
		return ;
	}
	while (n >= ++i)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			if (n == i)
				break;
			printf("*");
			n /= i;
			i = 1;
		}
	}
	printf("\n");
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return 0;
	}
	else
		fprime(argv[1]);
	return 0;
}
