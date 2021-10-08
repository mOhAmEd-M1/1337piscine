/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:37:54 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/05 18:04:30 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int dsize ;
	int index ;

	dsize = 0;
	while(*(dest + dsize) != '\0')
	{
		dsize++;
	}

	index = 0;
	while(src[index] != '\0')
	{
		dest[dsize + index] = src[index];
		index++;
	}
	dest[dsize + index] = '\0';
	return (dest);
}
