int    ft_iterative_factorial(int nb)
{
    int index;
	int factNbr;
    /* If the argument is not valid the function should return 0 */
    if (nb <= 0)
        return (0);
    index = 1;
    factNbr = 1;
    while (index <= nb)
    {
        factNbr *= index;
        index++;
    }
    return (factNbr);
}
#include <stdio.h>
int main(void)
{
	printf("%u",ft_iterative_factorial(12));
}