/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:10:17 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/11/16 15:54:11 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_helper(int nb, char *p_str)
{
	unsigned int	x;
	int				counter1;

	x = nb;
	counter1 = 0;
	if (nb < 0)
	{
		x = -1 * nb;
	}
	while (x)
	{
		*p_str = '0' + x % 10;
		p_str++;
		x /= 10;
		counter1++;
	}
	return (counter1);
}

void	ft_putnbr(int nb)
{
	char			str[10];
	char			*p_str;
	int				c;

	p_str = str;
	c = ft_putchar_helper(nb, p_str);
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	while (c > 0)
	{
		write(1, str + c - 1, 1);
		c--;
	}
}
void	ft_putnbr_fd(int n, int fd)
{
	char			str[10];
	char			*p_str;
	int				c;

	p_str = str;
	c = ft_putchar_helper(n, p_str);
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
	}
	while (c > 0)
	{
		write(fd, str + c - 1, 1);
		c--;
	}
}
