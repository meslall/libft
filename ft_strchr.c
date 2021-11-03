#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *ft_strchr(const char *str,int c)
{
    int i;
    i = 0;
    while(str[i])
    {
        if (str[i] == c)
        {
            return (i + 1);
        }
        i++;
    }
    return NULL;
}
int main ()
{
    char *s ="oussama meslallA";
    ft_strchr(s,'A');
    printf("")
}