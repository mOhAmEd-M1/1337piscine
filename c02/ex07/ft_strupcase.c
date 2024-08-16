/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:00:23 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/01 10:02:23 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) >= 'a' && *(str + index) <= 'z')
		{
			*(str + index) -= 32;
		}
		index++;
	}
	return (str);
}
