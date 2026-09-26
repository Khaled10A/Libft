/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:18:35 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/23 12:27:40 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	buffer[20];
// 	/* Test 1 */

// 	ft_memset(buffer, 'X', 5);
// 	buffer[5] = '\0';
// 	printf("Test 1: %s\n", buffer);
// 	/* Test 2 */
// 	ft_memset(buffer, 'A', 10);
// 	buffer[10] = '\0';
// 	printf("Test 2: %s\n", buffer);
// 	/* Test 3 */
// 	ft_memset(buffer, 0, 10);
// 	printf("Test 3: First byte = %d\n", buffer[0]);
// 	ft_memset(buffer, 'Z', 0);
// 	printf("Test 4: n = 0 (no change)\n");
// 	/* Test 5 */
// 	ft_memset(buffer, 65, 5);
// 	buffer[5] = '\0';
// 	printf("Test 5: %s\n", buffer);
// 	return (0);
// }
