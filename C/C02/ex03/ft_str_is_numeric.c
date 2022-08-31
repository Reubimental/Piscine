/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:54:27 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/06 17:17:18 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	bool	valid;
	char	num;

	i = 0;
	valid = true;
	while (true)
	{
		num = str[i];
		if (num == '\0')
		{
			break ;
		}
		if (!(num >= '0' && num <= '9'))
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}
/*
int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "123456";
	str_invalid = "123A56";
	printf("should be 1: %d\n", ft_str_is_numeric(str_valid));
	printf("should be 0: %d\n", ft_str_is_numeric(str_invalid));
} */
