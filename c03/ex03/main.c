/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:23:42 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/05 19:23:45 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int main(void)
{
	char src[122] = "source";
	char dest[120] = "destination";
	ft_strncat(dest,src,4);
    printf("%s",dest);
}
