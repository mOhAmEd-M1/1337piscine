/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:06:24 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/10 13:06:42 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index ;

	index = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			index++;
		}
		else
			return (0);
	}
	return (1);
}
