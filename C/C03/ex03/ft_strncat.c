/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:47:32 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/09 23:37:08 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && nb > 0)
	{
		dest[i + j] = src[j];
		j++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int main(void)
{
	char	string1[512] = "This is the beginning and ";
	char	string2[] = "This is the end.";

	printf ("%s", ft_strncat(string1, string2, 10));
}
*/
