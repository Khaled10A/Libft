/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:02:01 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/23 14:34:10 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
int	main(void)
{
char	dst[5];
size_t	len;
size_t	src_len;

src_len = ft_strlen("ABCDEFG");
len = ft_strlcpy(dst, "ABCDEFG", sizeof(dst));
printf("Source length: %zu\n", src_len);
printf("Result: %s\n", dst);
printf("Return: %zu\n", len);
return (0);
}
*/
