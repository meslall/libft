#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ft_islanum(int c)
{
    if (64<c<91||96<c<123||47<c<58)
    {
        return(1);
    }
    return(0);
}