/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:16:52 by mmasstou          #+#    #+#             */
/*   Updated: 2021/06/29 13:10:07 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 )
	{
		if (nb == -2147483648 )
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		else
		{
			nb -= nb;
			ft_putchar('-');
		}
	}
	else if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}
