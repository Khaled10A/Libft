/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:33:53 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/23 16:42:46 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;
	size_t	srclen;

	dstlen = 0;
	srclen = ft_strlen(src);
	while (dstlen < dstsize && dst[dstlen] != '\0')
		dstlen++;
	if (dstlen == dstsize)
		return (dstsize + srclen);
	i = 0;
	while (i < dstsize - dstlen - 1 && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
#include <stdio.h>

int	main(void)
{
char	dst[12];
size_t	len;

dst[0] = 'H';
dst[1] = 'i';
dst[2] = '\0';
len = ft_strlcat(dst, " Khaled", sizeof(dst));
printf("Result: %s\n", dst);
printf("Return: %zu\n", len);
return (0);
}
*/
