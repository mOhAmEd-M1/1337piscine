/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:26:52 by mmasstou          #+#    #+#             */
/*   Updated: 2021/07/09 10:26:55 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *base)
{
	int base_len;

	base_len  = 0;
	while (base[base_len] != '\0')
	{
		base_len++;
	}
	return (base_len);
}
int ft_atoi_base(char *str, char *base)
{
	int Result;
    int signe;
    int index;
	int baseLen;

    index = 0;
    signe = 1;
    Result = 0;
   	baseLen = ft_strlen(base);
     while (str[index])
    {
        if(str[index] == 32)
            index++;
        if ((str[index] >= 9 && str[index] <= 13)  )
            index++;
        if (str[index] == '-' || str[index] == '+')
        {
            if(str[index] == '-')
                  signe = -signe;
            index++;
        }
        else if (!(str[index] >= '0' && str[index] <= '9') &&
            !((str[index] >= 9 && str[index] <= 13) || str[index] == 32 ))
            return 0;
            
        if(str[index] >= '0' && str[index] <= '9')
        {
            Result = Result * baseLen + str[index] - '0';
            index++;
        }    
        
    }
    return (signe * Result);
}
#include <stdio.h>
int main ()
{
  char str[] = "-+-\n+-\t10100111001";
  char base[] = "01";
  printf("%d",ft_atoi_base(str,base));
}
