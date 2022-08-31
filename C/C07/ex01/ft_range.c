/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:37:24 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/19 14:52:23 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	range = malloc(sizeof(int) * (max - min));
	if (min >= max || range == 0)
		return (0);
	while (min < max)
		range[i++] = min++;
	range[i] = '\0';
	return (range);
}
/*
int	main(void)
{
	int	*test;
	int	i;

	test = ft_range(10, 25);
	i = 0;
	printf("%lu\n", sizeof (25 - 10));
//	while (test[i])
//	{
//		printf("%d", test[i++]);
//	}
	return (0);
}*/
