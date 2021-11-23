/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugina <ugina@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:31:06 by ugina             #+#    #+#             */
/*   Updated: 2021/10/16 21:33:20 by ugina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_moder(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	ft_putnbr_fd(int n, int fd)
{
	int bytes;
	char	str[13];
	int		neg;
	int		i;

	bytes = 0;
	i = 0;
	neg = (n < 0);
	ft_bzero(str, 13);
	if (n == 0)
		str[bytes++] = '0';
	while (n != 0)
	{
		str[i++] = '0' + ft_moder(n % 10);
		n /= 10;
	}
	bytes = i;
	if (neg)
		str[bytes++] = '-';
	else
		i--;
	while (i >= 0)
		write(fd, &str[i--], 1);
	return (bytes);
}
