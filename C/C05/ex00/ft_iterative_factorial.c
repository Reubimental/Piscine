/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:41:56 by rkabzins          #+#    #+#             */
/*   Updated: 2022/05/27 21:32:52 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 1)
	{
		nb = nb * (i -1);
		i--;
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	int n;

	n = -2;
	while (n < 12)
	{
		printf("fact(%d) = %d\n", n, ft_iterative_factorial(n));
		n++;
	}
} 
