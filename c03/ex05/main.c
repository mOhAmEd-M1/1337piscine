#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int main() 
{
  char str[40] = "abcdefghijklmnopqrst";
  char dest[40] = "ABCDEFGHIJK";
  char str1[40] = "abcdefghijklmnopqrst";
  char dest1[40] = "ABCDEFGHIJK";

  printf("%d\n",ft_strlcat(dest, str, 14));
  printf(" ft_strlcat |%s",dest);
  printf("\n\n");
  // printf("%u\n",strlcat(dest1, str1, 14));
  // printf(" strlcat |%s",dest1);
  return 0;
}
