/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:51:58 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/05 19:23:33 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int dsize;
	unsigned int index ;

	dsize = 0;
	while(dest[dsize] != '\0')
		dsize++;
	index = -1;
	while(src[++index] != '\0' && index < nb)
		dest[dsize++ ] = src[index];
	while (index <= nb)
	{
		dest[dsize] = '\0';
		index++;
	}
	return (dest);	
}
