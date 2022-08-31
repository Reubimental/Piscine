/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:42:41 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/02 10:34:39 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_swap(int *a, int *b);

int main(void)
{
    int a;
    int b;

        a = -1662744984;
        b = 1054423301;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = -349244502;
        b = -1923576514;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = -700464073;
        b = -87844143;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = 175437758;
        b = -1369002995;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = 1311760437;
        b = -1761514960;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = 1536323237;
        b = -334986998;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = -1938666618;
        b = -945503141;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = 1454053113;
        b = 624967516;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = -1742701463;
        b = 1011660182;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = -604669600;
        b = -1474261154;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);


    a = 4576878;
    ft_swap(&a, &a);
    printf("%d\n", a);
    return (0);
}
