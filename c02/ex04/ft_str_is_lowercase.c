/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:45:26 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/07 10:08:40 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index])
	{
		if (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			return (0);
		}
		else
		{
			index++ ;
		}
	}
	return (1);
}	
