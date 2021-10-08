void    ft_putnbr_base(int nbr, char *b_name);
int    ft_atoi(char *str)
{
    int Result;
    int signe;
    int index;

    index = 0;
    signe = 1;
    Result = 0;
   
    while(str[index] == ' ' || (str[index] >= '9' && str[index] <= 13))
        index++;
    while(str[index] == '-' || str[index] == '+')
        {
          if(str[index] == '-')
                signe = -signe;
          index++;
        }
    while(str[index] >= '0' && str[index] <= '9')
    {
        Result = Result * 10 + ( str[index] - '0');
        index++;
    }
   
    return (signe * Result);
}

int main(int nbr, char **base)
{
	if (nbr == 3)
    	ft_putnbr_base(ft_atoi(base[1]),base[2]);
    return 0;
}