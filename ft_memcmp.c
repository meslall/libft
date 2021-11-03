#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    int i;
    int c;
    unsigned char *s1;
    unsigned char *s2;

    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    i = 0;
    while (s1[i] && s2[i] && n > 0)
    {
        c = s1[i] - s2[i];
        if (c!=0)
            return(c);
        i++;
        n--;        
    }
    return(0);
}

int main(void )
{
    int n;
    char *str1="oussama";
    char *str2="oussama";

    n = ft_memcmp(NULL,str2,5);
    const char *rel = n < 0 ? " precedes " : n > 0 ? " follows " : " compares equal ";
    printf("%s\n",rel);
}