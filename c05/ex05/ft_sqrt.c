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