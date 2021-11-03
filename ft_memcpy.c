#include <unistd.h>
#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    char *s;
    char *d;
    int i;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;
    while (n > 0)
    {
        d[i] = s[i];
        i++;
        n--;
    }
    return (d);
}
int main(void)
{
    char src[]="omeslall";
    char dest[5];
    ft_memcpy(dest,src+1,3);
    printf("%s\n",dest);
}