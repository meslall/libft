#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ft_strlen(const char *str)
{
    int i;
    while (str[i]!= '\0')
    {
        i++;
    }
    return i;
}