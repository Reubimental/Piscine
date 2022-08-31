/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:31:12 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/14 15:02:50 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	index;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	index = 0;
	while (index * index <= (unsigned int)nb)
		index++;
	index -= 1;
	if (index * index == (unsigned int)nb)
		return (index);
	return (0);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int number;

	number = -2;
	while (number < 26)
	{
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
		number++;
	}
	printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
	printf("sqrt(%d) = %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("sqrt(%d) = %d\n", INT_MIN, ft_sqrt(INT_MIN));
	printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));
} */
