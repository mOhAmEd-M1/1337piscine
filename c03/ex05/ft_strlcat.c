/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:40:18 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/08 09:58:13 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int d_len;
	unsigned int s_len;
	unsigned int index;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	
	if (size == 0 || size <= d_len)
		return (s_len + size);
	index = -1;
	while (++index < s_len && index < size - d_len - 1)
		dest[d_len + index] = src[index];
	dest[d_len + index] = '\0';
	return (d_len + s_len);
}
