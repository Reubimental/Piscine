/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 01:09:57 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/19 14:51:59 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcpy(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strcount(char *count)
{
	int	i;

	i = 0;
	while (count[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strcount(src) + 1));
	ft_strcpy(dest, src);
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "String";

	ft_strdup(str);
} */
