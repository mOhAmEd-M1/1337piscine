#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(char *str);
int main(int index , char **str)
{
	int nbr;
	int nbr1;
	if (index == 2)
	{
		nbr = ft_atoi(str[1]);
		printf("ft_atoi |%d\n",nbr);
		nbr1 = atoi(str[1]);
		printf("atoi  |%d",nbr1);
	}
	return 0;
}
