#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void *ft_memchr(const void *src, int c, size_t n)
{
    unsigned char *s;
    int i;
    i = 0;
    while (n >= 0)
    {
        s[i];
        if (s[i]==c)
        return(s);
        i++;
        n--;
    }
    return(0);
}