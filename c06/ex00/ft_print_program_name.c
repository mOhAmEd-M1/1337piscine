#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int Ac, char **Av)
{
	if (Ac == 1)
		ft_putstr(Av[0]);
	return (0);
}
