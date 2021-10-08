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
int	ft_strlen(char *str);
int main(int index, char **src)
{
	if (index > 2)
		printf("Error entre only 'SRC'");
	else if (index <= 1)
		printf("Error , enter 'SRC'");
	else
	{
		printf("%d",ft_strlen(src[1]));
	}
	return (0);	
}
