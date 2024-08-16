/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 08:51:54 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/06 14:38:47 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = - 1;
		if (to_find[++j] != '\0')
			while (to_find[j] == str[i + j])
				if (!to_find[j + 1])
					return (&str[i]);
		else
			return(str);
	}
	return (0);
}
