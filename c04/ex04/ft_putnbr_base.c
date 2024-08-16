/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:36:06 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/08 17:09:37 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);
int	ft_twice(int b_index, char *b_name);
void ft_printf(int nbr, int b_index, char *b_name);

void    ft_putnbr_base(int nbr, char *b_name)
{
    int b_index ;

    b_index = 0 ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -1 * nbr;
	}
    while (b_name[b_index])
    {
        if (b_name[b_index] == '-' || b_name[b_index] == '+')/* base contains + or - */
           break ;
		if (ft_twice(b_index, b_name))/* base contains the same character twice */
			break ;
        b_index++;
    }
	if (b_name[b_index] == '\0' && b_index > 1)
		ft_printf(nbr, b_index, b_name);
}

void    ft_putchar(char c)
{
    write(1,&c,1);
}

int	ft_twice(int b_index, char *b_name)
{
	int i;
    int k;
	
	i = -1;
	while(++i < b_index)
	{
		k = i ;
		while(++k < b_index)
			if(b_name[i] == b_name[k])
				return (1);
	}
	return (0);
}

void ft_printf(int nbr, int b_index, char *b_name)
{
	if (nbr <= b_index - 1 && nbr >= 0)
			ft_putchar(b_name[nbr]);
	if (nbr > b_index - 1)
	{
		ft_putnbr_base(nbr / b_index,b_name);
		ft_putchar(b_name[nbr % b_index]);
	}
}
