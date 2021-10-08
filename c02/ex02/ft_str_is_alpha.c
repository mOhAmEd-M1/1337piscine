/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:17:04 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/02 12:53:40 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((*(str + index) >= 'a' && *(str + index) <= 'z') || \
				   	(*(str + index) >= 'A' && *(str + index) <= 'Z')))
			return (0);
		index++;
	}
	return (1);
}
