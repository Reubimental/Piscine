/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:00:49 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/07 15:39:46 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_printable(char *str)
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
		if (!(let >= ' ' && let <= '~'))
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}

/* int     main(void)
{
    char *str_valid;
    char *str_invalid;

    str_valid = "123456";
    str_invalid = "\n";
    printf("should be 1: %d\n", ft_str_is_printable(str_valid));
    printf("should be 0: %d\n", ft_str_is_printable(str_invalid));
} */
