/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:15:55 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/27 14:59:32 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_number(char *result, long nb, int len)
{
	int	i;

	i = len;
	result[i] = '\0';
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		i--;
		result[i] = (nb % 10) + '0';
		nb = nb / 10;
	}
}

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	nb;

	nb = n;
	len = num_len(n);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	if (nb == 0)
	{
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	fill_number(result, nb, len);
	if (n < 0)
		result[0] = '-';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
char	*result;

result = ft_itoa(123);
printf("%s\n", result);
free(result);
result = ft_itoa(-123);
printf("%s\n", result);
free(result);
result = ft_itoa(0);
printf("%s\n", result);
free(result);
result = ft_itoa(-2147483648);
printf("%s\n", result);
free(result);
result = ft_itoa(2147483647);
printf("%s\n", result);
free(result);
return (0);
}
*/
