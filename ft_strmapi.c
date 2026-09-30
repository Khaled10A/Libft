/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 10:57:21 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/27 14:59:24 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	result = malloc(ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

static char	to_upper(unsigned int i, char c)
{
(void) i;
if (c >= 'a' && c <= 'z')
return (c - 32);
return (c);
}

int	main(void)
{
char	*result;

result = ft_strmapi("hello world", to_upper);
printf("%s\n", result);
free(result);
return (0);
}
*/
