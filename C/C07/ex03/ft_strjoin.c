/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 09:06:30 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/19 14:59:49 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	totalstrlen(int size, char **strs, char *sep)
{
	int	r;
	int	i;

	i = 0;
	r = 1;
	while (i < size)
	{
		r += ft_strlen(strs[i]);
		i++;
	}
	r += ft_strlen(sep) * (size - 1);
	return (r);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		l;

	str = (char *) malloc(totalstrlen(size, strs, sep) * sizeof(char));
	if (str == NULL)
		return (str);
	i = 0;
	while (i < size)
	{
		ft_strcpy(str, strs[i]);
		if (i != size - 1)
		{
			ft_strcpy(str, sep);
   i = 0;
    r = 1;
    while (i < size)
    {
        r += ft_strlen(strs[i]);
        i++;
    }
    r += ft_strlen(sep) * (size - 1);
    return (r);		}
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int		i;
	char	**strs;
	char	*sep;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "This is a";
	strs[1] = " string that";
	strs[2] = " can be joined";
	sep = "";
	i = 1;
	while (i < 3)
	{
		result = ft_strjoin(i, strs, sep);
		printf("result with size = %d : $%s$\n", i, result);
		free(result);
		i++;
	}
}
