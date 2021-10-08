int	ft_iterative_power(int nb, int power)
{
	int index;
	int result ;

	if (power < 0)
		return(0);
	else if (power == 0 && nb == 0)
		return (1);
	else
	{
		index = 0;
		result = 1;
		while (nb > 0 && index < power)
		{
			result *= nb;
			index++;
		}
		return (result);
	}
}
#include <stdio.h>
int main(void)
{
	printf("%u",ft_iterative_power(5,10));
}