int    ft_atoi(char *str)
{
    int Result;
    int signe;
    int index;

    index = 0;
    signe = 1;
    Result = 0;
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
            Result = Result * 10 + str[index] - '0';
            index++;
        }    
        
    }
    return (signe * Result);
}
#include <stdio.h>
int main ()
{
  char str[] = "--\n+-\t1325";
  printf("%d",ft_atoi(str));
}