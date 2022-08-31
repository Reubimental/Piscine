/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:12:48 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/08 13:06:39 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	bool	valid;
	char	let;

	i = 0;
	valid = true;
	while (true)
	{
		let = str[i];
		if (let == '\0')
		{
			break ;
		}
		if (!(let >= 'a' && let <= 'z'))
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}
