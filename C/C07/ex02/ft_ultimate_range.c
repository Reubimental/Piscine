/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:31:56 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/19 14:56:17 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	r;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	r = max - min;
	*range = (int *) malloc(sizeof(r) * r);
	if (*range == NULL)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (r);
}
/*
int	main(void)
{
	int	i;
	int	*str; 
	int size = ft_ultimate_range(&str, 10, 20);


	i = 0;
	while (i < size)
		printf("%d numbers.\n", str[i++]);
}
*/
