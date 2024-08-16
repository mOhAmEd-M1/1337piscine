/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:58:53 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/05 10:20:53 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	ft_strcmp(char *s1,char *s2);
int      main (int argc, char **argv)
{
    int  valeur;

    if (argc < 3)
    {
         printf ("Error"); 
        return 0;
    }

    valeur = ft_strcmp (argv[1], argv[2]);

    if (valeur < 0)
        printf ("'%s' est  petite que '%s' -| %d.\n", argv[1], argv[2],valeur); 
    else if (valeur == 0)
        printf ("'%s' et '%s'  égales. -| %d\n", argv[1], argv[2],valeur); 
    else
        printf ("'%s' est  grande que '%s'. -| %d\n", argv[1], argv[2],valeur);
    return 0;
}

