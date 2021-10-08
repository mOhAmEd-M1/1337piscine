/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:17:27 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/07 10:19:35 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	base_hexadecimals(unsigned char str)
{
	char	*b_hexa;

	b_hexa = "0123456789abcdef";
	ft_putchar(b_hexa[str / 16]);
	ft_putchar(b_hexa[str % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < ' ' || str[index] == 127 )
		{
			ft_putchar('\\');
			base_hexadecimals(str[index]);
		}
		else
		{
			ft_putchar(str[index]);
		}
		index++;
	}
}
