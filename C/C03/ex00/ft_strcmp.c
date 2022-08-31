/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:15:05 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/10 01:23:21 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	String1[] = "This is string.";
	char	String2[] = "This is string.";
	char	String3[] = "This is string!";
	char	String4[] = "This is string?";
	char	String5[] = "This is string";

	printf ("This should be 0: %d ", ft_strcmp(String1, String2));
	printf ("%c", '\n');
	printf ("This should be 1: %d ", ft_strcmp(String1, String3));
	printf ("%c", '\n');
	printf ("This should be -1: %d ", ft_strcmp(String1, String4));
	printf ("%c", '\n');
	printf ("This should be 1: %d ", ft_strcmp(String1, String5));
} */
