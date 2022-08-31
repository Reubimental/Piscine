/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:51:28 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/13 22:51:52 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	bool	valid;
	char	sng;

	i = 0;
	valid = true;
	while (true)
	{
		sng = str[i];
		if (sng == '\0')
		{
			break ;
		}
		if (!((sng >= 'A' && sng <= 'Z') || (sng >= 'a' && sng <= 'z')))
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}
