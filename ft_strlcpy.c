#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* ft_strlcpy (char *dst, const char* src, size_t dstsize)
{
    int i;
    i = 0;
    while (i < dstsize && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    if (i < dstsize && dst[i] != '\0')
    {
        dst[i] = '\0';
    }
    return(dst);
}
int main()
{
    char s[] = {"Helloworld!!!"};
    char d[5];
    printf("%s", ft_strlcpy(d,s,5));
   return 0;
}