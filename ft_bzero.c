#include<unistd.h>
#include<stdio.h>
#include<string.h>
void *ft_bzero(void *s, size_t n)
{
    unsigned char *tmp;
    tmp = (unsigned char *)s;
    while (n > 0)
    {
        *tmp = 0;
        tmp++;
        n--;
    }
    return(s);
}
int main(void)
{
    char str[] ="oussama ?";
    printf("before : %s\n",str);
    ft_bzero(str+8, 2);
    //bzero(str,2);
    printf("after : %s\n",str);
}