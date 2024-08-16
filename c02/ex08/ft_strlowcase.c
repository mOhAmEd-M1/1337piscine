/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:03:30 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/01 10:22:37 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) >= 'A' && *(str + index) <= 'Z')
		{
			*(str + index) += 32;
		}
		index++;
	}
	return (str);
}
