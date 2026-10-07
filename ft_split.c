/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:45:49 by kalnajja          #+#    #+#             */
/*   Updated: 2026/10/07 20:02:29 by kalnajja         ###   ########.fr       */
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
/*#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	print_split(char **arr)
{
int	i;

i = 0;
while (arr[i] != NULL)
{
printf("[%d] = \"%s\"\n", i, arr[i]);
free(arr[i]);
i++;
}
free(arr);
}

int	main(void)
{
char	**result;

// 1. Normal
printf("=== 1 ===\n");
result = ft_split("hello world 42", ' ');
print_split(result);

// 2. Multiple separators
printf("\n=== 2 ===\n");
result = ft_split("hello   world     42", ' ');
print_split(result);

// 3. Separators at beginning/end
printf("\n=== 3 ===\n");
result = ft_split(",,,hello,world,,,", ',');
print_split(result);

// 4. Only separators
printf("\n=== 4 ===\n");
result = ft_split(",,,,", ',');
print_split(result);

// 5. Empty string
printf("\n=== 5 ===\n");
result = ft_split("", ' ');
print_split(result);

// 6. One word
printf("\n=== 6 ===\n");
result = ft_split("hello", ' ');
print_split(result);

// 7. Separator is not present
printf("\n=== 7 ===\n");
result = ft_split("hello world", ',');
print_split(result);

// 8. Different separator
printf("\n=== 8 ===\n");
result = ft_split("helloXworldX42", 'X');
print_split(result);

// 9. Single character
printf("\n=== 9 ===\n");
result = ft_split("a", ' ');
print_split(result);

// 10. Spaces + tabs-like character
printf("\n=== 10 ===\n");
result = ft_split("hello\tworld\t42", '\t');
print_split(result);

return (0);
}*/
