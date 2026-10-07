/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 10:57:21 by kalnajja          #+#    #+#             */
/*   Updated: 2026/10/07 20:06:53 by kalnajja         ###   ########.fr       */
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
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	to_upper(unsigned int i, char c)
{
(void)i;
if (c >= 'a' && c <= 'z')
return (c - 32);
return (c);
}

char	add_index(unsigned int i, char c)
{
return (c + i);
}

int	main(void)
{
char	*result;

result = ft_strmapi("hello", to_upper);
printf("%s\n", result);
free(result);

result = ft_strmapi("abcde", add_index);
printf("%s\n", result);
free(result);

result = ft_strmapi("", to_upper);
printf("\"%s\"\n", result);
free(result);

return (0);
}
*/
