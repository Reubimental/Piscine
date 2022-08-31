/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:34:05 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/14 15:34:37 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pstr(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		write(1, &str[j], 1);
		j++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*t;

	t = *a;
	*a = *b;
	*b = t;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 1;
	while (i < argc - 1)
	{
		x = 1;
		while (x < argc - 1)
		{
			if (ft_strcmp(argv[x], argv[x + 1]) > 0)
			{
				ft_swap(&argv[x], &argv[x + 1]);
			}
			x++;
		}
		i++;
	}
	x = 1;
	while (x < argc)
	{
		ft_pstr(argv[x]);
		write(1, "\n", 1);
		x++;
	}
}
