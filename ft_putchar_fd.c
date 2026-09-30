/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 09:46:02 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/26 10:53:24 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
ft_putchar_fd('A', 1);
ft_putchar_fd('\n', 1);
ft_putchar_fd('B', 1);
ft_putchar_fd('\n', 1);
return (0);
}
*/
