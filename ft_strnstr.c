#include<unistd.h>
#include<stdio.h>
#include<string.h>
char * ft_strnstr(char * str , char  *to_find, size_t n)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] && n > 0)
    {
        j = 0;
        while (str[i] == to_find[j] && to_find[j])
        {
            i++;
            j++;
            if (to_find[j]== '\0')
                return(to_find[j]);
        }
        n--;
        i++;
    }
    return 0;
}