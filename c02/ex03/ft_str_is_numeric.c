/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:47:10 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/07 10:03:29 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	if (*(str + index) == '\0')
		return (1);
	while (*(str + index) != '\0')
	{
		if (!(*(str + index) >= 48 && *(str + index) <= 57))
			return (0);
		index++;
	}
	return (1);
}
