/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 12:07:17 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/24 18:36:02 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
printf("Mine:     %d\n", ft_strncmp("Hello", "Hello", 5));
printf("Original: %d\n", strncmp("Hello", "Hello", 5));
printf("\n");
printf("Mine:     %d\n", ft_strncmp("Hello", "Hallo", 5));
printf("Original: %d\n", strncmp("Hello", "Hallo", 5));
printf("\n");
printf("Mine:     %d\n", ft_strncmp("Hi", "HiHello", 5));
printf("Original: %d\n", strncmp("Hi", "HiHello", 5));
printf("\n");
printf("Mine:     %d\n", ft_strncmp("Hello", "Help", 3));
printf("Original: %d\n", strncmp("Hello", "Help", 3));
return (0);
}
*/
