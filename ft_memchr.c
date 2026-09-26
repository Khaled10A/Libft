/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:18:14 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/25 15:49:29 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return ((void *) & ((unsigned char *) s)[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	s[] =
{
'a', 'b', 'c', '\0', 'X'
};
char	*mine;
char	*original;

mine = ft_memchr(s, 'X', 5);
original = memchr(s, 'X', 5);
printf("Mine index:     %ld\n", mine - s);
printf("Original index: %ld\n", original - s);
return (0);
}
*/
