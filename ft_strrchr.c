#include<unistd.h>
#include<stdio.h>
#include<string.h>
char *ft_strrchr(const char *str, int c)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            j = i;
        }
        i++;
    }
    if (j > 0)
        return(j);
    else
        return (NULL);

}