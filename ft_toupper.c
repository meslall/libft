#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ft_toupper(int c)
{
    int h;
    if(96<c<123)
    {
        h = c - 32 ;
        return (h);
    }
return 0;
}