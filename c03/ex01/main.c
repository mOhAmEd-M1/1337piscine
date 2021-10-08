#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int main()
{
     char dest[10] ="chaizedet" ;
     char src[10] = "chai";

     int n = ft_strncmp(dest, src, 3);
     printf("ft_strncmp  |%s -- %d\n", dest,n);
    printf("***************************\n");
    
}
