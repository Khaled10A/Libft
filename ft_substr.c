/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:34:57 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/26 17:13:17 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty_string(void)
{
	char	*result;

	result = malloc(1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (empty_string());
	s_len = s_len - start;
	if (len > s_len)
		len = s_len;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
char	*result;

result = ft_substr("Hello World", 6, 5);
printf("%s\n", result);
free(result);
return (0);
}
*/
