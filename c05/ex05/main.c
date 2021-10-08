#include <stdio.h>
int		ft_sqrt(int nb)
{
	int a;

	a = 1;
	while (a <= 46340 && nb > 0)
	{
		if (a * a == nb )
			return(a);
		a++;
	}
	return 0;
}
int main(void)
{
	printf("%d",ft_sqrt(2147395647));
}