/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:27:24 by rkabzins          #+#    #+#             */
/*   Updated: 2021/12/13 15:10:38 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_struncapitalize(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
	a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		a;
	char	b;

	ft_struncapitalize(str);
	a = 0;
	while (str[a] != '\0')
	{
		b = str[a];
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		if ((b >= ' ' && b <= '/') || (b >= '[' && b <= '`') || (b == '.' ) || (b == '/'))
		{	
			if (str[a + 1] >= 'a' && str[a + 1] <= 'z')
			{
				str[a + 1] -= 32;
			}
		}
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	lower[] = "abcdefg";
	char	upper[] = "ABCDEFG";
	char	mixed[] = "0BcDeFg";
	char	spaced[] = "jas abAd8-da .as+ad-v";

	printf ("This started lower: %s\n", ft_strcapitalize(lower));
	printf ("This started upper: %s\n", ft_strcapitalize(upper));
	printf ("This started mixed: %s\n", ft_strcapitalize(mixed));
	printf ("This started spaced: %s\n", ft_strcapitalize(spaced));
	return (0);
}
