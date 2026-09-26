/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:21:31 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/24 12:32:39 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((char *) & s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	*s;

s = "Hello Khaled";
printf("Mine:     %s\n", ft_strrchr(s, 'l'));
printf("Original: %s\n", strrchr(s, 'l'));
return (0);
}
*/
