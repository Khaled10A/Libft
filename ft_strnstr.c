/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:09:15 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/25 15:49:55 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0' && len > i + j)
			j++;
		if (needle[j] == '\0')
			return ((char *) & haystack[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
char	*result;

printf("1. Found:\n");
result = ft_strnstr("Hello Khaled", "Khaled", 12);
printf("Result: %s\n", result);
printf("\n2. Not found:\n");
result = ft_strnstr("Hello Khaled", "Ahmed", 12);
if (result == NULL)
printf("Result: NULL\n");
else
printf("Result: %s\n", result);
printf("\n3. Empty needle:\n");
result = ft_strnstr("Hello", "", 5);
printf("Result: %s\n", result);
printf("\n4. Found but outside len:\n");
result = ft_strnstr("Hello Khaled", "Khaled", 5);
if (result == NULL)
printf("Result: NULL\n");
else
printf("Result: %s\n", result);
printf("\n5. Needle at beginning:\n");
result = ft_strnstr("Khaled Hello", "Khaled", 12);
printf("Result: %s\n", result);
return (0);
}
*/
