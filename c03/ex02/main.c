#include <stdio.h>
#include <string.h>
char	*ft_strcat(char	*dest,char	*src);
int main(void)
{
	char src[7] = "source";
	char dest[20] = "destination";
    printf("%s",strcat(dest,src));
}
