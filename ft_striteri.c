/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 12:44:06 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/30 11:26:52 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

static void	to_upper(unsigned int i, char *c)
{
(void) i;
if (*c >= 'a' && *c <= 'z')
*c = *c - 32;
}

int	main(void)
{
char	str[] = "hello world";

ft_striteri(str, to_upper);
printf("%s\n", str);
return (0);
}
*/
