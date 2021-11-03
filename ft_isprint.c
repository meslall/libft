#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ft_isprint(int c)
{
    if (31<c<128)
    {
        return(1);
    }
    return(0);
}