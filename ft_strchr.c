/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:42:30 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/24 12:32:38 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((char *) & s[i]);
		i++;
	}
	if ((unsigned char) c == '\0')
		return ((char *) & s[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	*s;
char	*my_result;
char	*original_result;

s = "Hello Khaled";
my_result = ft_strchr(s, 'l');
original_result = strchr(s, 'l');
printf("My function: %s\n", my_result);
printf("Original:    %s\n", original_result);
return (0);
}
*/
