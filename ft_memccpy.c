#include<unistd.h>
#include<stdio.h>
#include<string.h>
void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
    int i;
    unsigned char *d;
    unsigned char *s;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;
    while (n > 0)
    {
        if (s[i] == c)
        {
            return(d);
        }
        d[i] = s[i];
        i++;
        n--;
    }
    return(d);
}
int main(void)
{
    char src[]="omeslall";
    char *dest=strdup("");
    ft_memccpy(dest,src+3,'e',5);
    printf("%s\n",dest);
}