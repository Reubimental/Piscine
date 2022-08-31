/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:56:13 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/13 23:00:07 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	char				a;
	char				b;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		a = s1[i];
		b = s2[i];
		if (a > b)
		{
			return (1);
		}
		if (a < b)
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	String1[] = "This is string.";
	char	String2[] = "This is string.";
	char	String3[] = "This is string!";
	char	String4[] = "This is string?";
	char	String5[] = "This is string";

	printf ("This should be 0: %d ", ft_strncmp(String1, String1, 20));
	printf ("%c", '\n');
	printf ("This should be 1: %d ", ft_strncmp(String1, String3, 16));
	printf ("%c", '\n');
	printf ("This should be -1: %d ", ft_strncmp(String1, String4, 16));
	printf ("%c", '\n');
	printf ("This should be 0: %d ", ft_strncmp(String1, String5, 10));
} */
