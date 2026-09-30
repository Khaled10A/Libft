/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:45:49 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/28 13:00:34 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int		count;
	int		in_word;
	size_t	i;

	count = 0;
	in_word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			count++;
			in_word = 1;
		}
		i++;
	}
	return (count);
}

static void	free_split(char **result, int word)
{
	int	i;

	i = 0;
	while (i < word)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	*get_word(char const *s, char c, size_t *i)
{
	size_t	start;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] != '\0' && s[*i] != c)
		(*i)++;
	return (ft_substr(s, start, *i - start));
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;
	size_t	i;
	int		word;

	i = 0;
	word = 0;
	count = count_words(s, c);
	result = malloc((count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (word < count)
	{
		result[word] = get_word(s, c, &i);
		if (result[word] == NULL)
		{
			free_split(result, word);
			return (NULL);
		}
		word++;
	}
	result[word] = NULL;
	return (result);
}
