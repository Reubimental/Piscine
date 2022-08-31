/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:37:46 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/14 15:03:15 by rkabzins         ###   ########.fr       */
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
	return (index);
}

int	ft_is_prime(int nb)
{
	int	sqrt;
	int	index;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	index = 2;
	sqrt = ft_sqrt(nb);
	while ((index <= sqrt) && (nb % index != 0))
		index++;
	return (index > sqrt);
}
/*
#include <stdio.h>

int	main(void)
{
	int	number;
	int	result;
	int	count;

	number = 0;
	count = 0;
	while (number <= 50)
	{
		result = ft_is_prime(number);
		printf("is_prime(%d) = %d\n", number, result);
		number++;
		if (result)
			count++;
	}
	printf("first 50 number, %d prime\n", count);
} */
