/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:54:01 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/13 18:07:11 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	else
	{
		i = nb;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar(i % 10 + 48);
}

int	main(void)
{
	ft_putnbr(-4294967296);
}

