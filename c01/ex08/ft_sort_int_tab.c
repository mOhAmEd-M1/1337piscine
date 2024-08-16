/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:37:00 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/03 21:26:21 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b ;
	*b = x;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	k;

	index = 0;
	while (index < size)
	{
		k = index + 1;
		while (k < size)
		{
			if (tab[index] >= tab[k])
			{
				ft_swap(&tab[index], &tab[k]);
				k++;
			}
			else
			{
				k++;
			}
		}
		index++;
	}
}
