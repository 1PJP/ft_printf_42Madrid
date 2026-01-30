/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jezambra <jezambra@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:52:52 by jezambra          #+#    #+#             */
/*   Updated: 2026/01/30 18:13:24 by jezambra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	words_in_box(char **str, char const *s, char c, int word)
{
	int	i;
	int	j;
	int	i2;

	i = 0;
	j = 0;
	while (j < word)
	{
		i2 = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			str[j][i2] = s[i];
			i2++;
			i++;
		}
		str[j][i2] = '\0';
		j++;
	}
}

static char	**free_memory(char **str, int j)
{
	while (j >= 0)
	{
		free(str[j]);
		j--;
	}
	free(str);
	return (NULL);
}

static char	**words_save_memory(char const *s, char c, int word)
{
	char	**str;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	str = malloc(sizeof(char const *) * (word + 1));
	if (!str)
		return (NULL);
	while (j < word)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		str[j] = malloc(i - start + 1);
		if (!str[j])
			return (free_memory(str, j));
		j++;
	}
	str[j] = NULL;
	return (str);
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		word;

	if (!s)
		return (NULL);
	word = count_words(s, c);
	str = words_save_memory(s, c, word);
	if (!str)
		return (NULL);
	words_in_box(str, s, c, word);
	return (str);
}
/*
int main(void)
{
	char **result;
	int i;

	result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^",'^');
	i = 0;
	while (result[i])
	{
		printf("Palabra %d: \"%s\"\n", i, result[i]);
		free(result[i]); // Liberar malloc de cada palabra
		i++;
	}
	free(result); // Liberar gran malloc
	return (0);
}*/
/*char	**ft_split(char const *s, char c)
{
	char	**str;
	int	word;
	int	i;
	int	j;
	int	start;
	int	i2;

	if(!s)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{	
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
		else 
			i++;
	}
	str = malloc(sizeof(char const *) * (word + 1));
	if(!str)
		return (NULL);
	j = 0;
	i = 0;
	str[j] = NULL;
	while (j < word)
	{
			while (s[i] && s[i] == c)
				i++;
			start = i;
			while (s[i] && s[i] != c)
				i++;
			str[j] = malloc(i - start + 1);
			if(!str[j])
			{
				while (str[j])
				{	
					free(str[j]);
						j--;
				}
				free(str);
			}
		j++;
	}
	j = 0;
	i = 0;
	while (j < word)
	{
		i2 = 0;
		while (s[i] && s[i] == c)
				i++;
		while (s[i] && s[i] != c)
		{
			str[j][i2] = s[i];
			i2++;
			i++;
		}
		str[j][i2] = '\0';
		j++;
	}
	return (str);
}*/