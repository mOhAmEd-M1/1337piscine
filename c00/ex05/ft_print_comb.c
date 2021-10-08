/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:51:00 by mmasstou          #+#    #+#             */
/*   Updated: 2021/06/25 10:15:58 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	conditionsFunction(int nb1, int nb2, int nb3)
{
	if (nb1 < nb2 && nb2 < nb3)
	{
		ft_putchar(nb1 + 48);
		ft_putchar(nb2 + 48);
		ft_putchar(nb3 + 48);
		if (nb1 != 7 )
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	whileFunc(int nb1)
{
	int		nb2 ;
	int		nb3 ;

	while (nb1 < 9)
	{
		nb2 = nb1 + 1;
		while (nb2 < 9)
		{
			nb3 = nb1 + 1;
			while (nb3 <= 9)
			{
				conditionsFunction(nb1, nb2, nb3);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}

void	ft_print_comb(void)
{
	int	nb1;

	nb1 = 0;
	whileFunc(nb1);
}
