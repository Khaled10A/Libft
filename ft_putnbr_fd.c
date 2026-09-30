/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalnajja <kalnajja@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 11:24:44 by kalnajja          #+#    #+#             */
/*   Updated: 2026/09/26 13:26:03 by kalnajja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
/*
int	main(void)
{
ft_putnbr_fd(123, 1);
ft_putchar_fd('\n', 1);
ft_putnbr_fd(-123, 1);
ft_putchar_fd('\n', 1);
ft_putnbr_fd(0, 1);
ft_putchar_fd('\n', 1);
return (0);
}
*/
