#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);
int main() {
  char *str = "Foo Bar Baz";
  char *to_find = "B";
    char *ptr;
  int index ;
  index = 0;
  ptr = ft_strstr(str, to_find);
  //printf("%s", ft_strstr(str, to_find));
  while (ptr[index] != '\0')
  {
    write(1,&ptr[index],1);
    index++;
  }
  return 0;
}
