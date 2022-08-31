#include <stdio.h>
#include "ft_ultimate_div_mod.c"

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	
	int	a;
	int b;

	a = 10;
	b = 3;

	int *division = &a;
	int *remainder = &b;

	ft_ultimate_div_mod(division, remainder);
	printf("the division is %d", *division);
	printf("the remainder is %d", *remainder);
	return(0);
}
