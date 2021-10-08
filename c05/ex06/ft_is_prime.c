int	is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime(n, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (is_prime((unsigned int)nb, 2));
}
#include <stdio.h>
int main()
{
	int x;

	x = -200;
	while (x <= 336893)
	{
		if (ft_is_prime(x))
			printf(" %d is prime\n",x);
		x++;
	}
	return (0);
}