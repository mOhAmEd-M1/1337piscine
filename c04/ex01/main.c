/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:56:23 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/08 11:05:19 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
int main(int index, char **src)
{
	if (index > 2)
		printf("Error entre only 'SRC'");
	else if (index <= 1)
		printf("Error , enter 'SRC'");
	else
	{
		ft_putstr(src[1]);
	}
	return (0);	
}
