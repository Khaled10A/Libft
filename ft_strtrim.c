/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:10:45 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/26 17:05:43 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	return (ft_strchr(set, c) != NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	while (start < end && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	result = malloc(end - start + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
char	*result;

result = ft_strtrim("...Hello...", ".");
printf("1: [%s]\n", result);
free(result);
result = ft_strtrim("xxxHello Worldxxx", "x");
printf("2: [%s]\n", result);
free(result);
result = ft_strtrim("   Hello   ", " ");
printf("3: [%s]\n", result);
free(result);
result = ft_strtrim("xxxxx", "x");
printf("4: [%s]\n", result);
free(result);
result = ft_strtrim("Hello World", "x");
printf("5: [%s]\n", result);
free(result);
result = ft_strtrim("xxHelloxWorldxx", "x");
printf("6: [%s]\n", result);
free(result);
return (0);
}
*/
