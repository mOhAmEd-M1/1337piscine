/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 13:07:55 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/03 21:17:29 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	index ;

	index = 0;
	while (--size > index)
	{
		ft_swap(&tab[index], &tab[size]);
		index++;
	}
}
