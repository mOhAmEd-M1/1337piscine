/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:02:26 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/02 10:13:14 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (*(str + i) >= 'a' && *(str + i) <= 'z' )
	{
		*(str) -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (*(str + i) >= 'A' && str[i] <= 'Z' )
		{
			*(str) += 32;
		}
		if (!(str[i - 1] >= '0' && str[i - 1] <= '9') && \
				!(str[i - 1] >= 'A' && str[i - 1] <= 'Z') && \
				!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && \
				(str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
