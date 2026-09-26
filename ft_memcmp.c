/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:34:09 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/24 18:35:58 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s1)[i] != ((unsigned char *) s2)[i])
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	s1[] =
{
'a', 'b', 'c', '\0', 'X'
};
char	s2[] =
{
'a', 'b', 'c', '\0', 'Y'
};
printf("Mine:     %d\n", ft_memcmp(s1, s2, 5));
printf("Original: %d\n", memcmp(s1, s2, 5));
return (0);
}
*/
