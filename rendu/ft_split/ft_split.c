/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:36:46 by dmeurant          #+#    #+#             */
/*   Updated: 2023/05/13 13:36:50 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return i;
}

int is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return 1;
	else
		return 0;
}

static int count_word (char *s)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while(s[i])
	{
		if (is_space(s[i]) == 0)
		{
			count++;
			while (s[i] && is_space(s[i]) == 0)
			{
				i++;
			}
		}
		i++;
	}
	return count;
}

static char *word_dup (char *str, int start, int finish)
{
	int i;
	char *word;
	
	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return NULL;
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return word;
}

char    **ft_split(char *str)
{
	int 	i;
	int	j;
	int index;
	char **result;
	
	result = malloc((count_word(str) + 1) * sizeof(char *));
	if (!str || !result)
		return NULL;
	index = -1;
	i = 0;
	j = 0;
	while(i <= ft_strlen(str))
	{
		if (is_space(str[i]) == 0 && index < 0)
			index = i;
		else if ((is_space(str[i]) == 1 || i == ft_strlen(str)) && index >= 0)
		{
			result[j++] = word_dup(str, index, i);
			index = -1;
		}
		i++;
	}
	result[j] = NULL;
	return result;
}
