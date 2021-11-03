#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ft_isascii(int c)
{
    if (0<c<127)
    {
        return(1);
    }
    return(0);
}