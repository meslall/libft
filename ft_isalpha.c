#include"libft.h"

int ft_isalpha(int c)
{
    if (65<=c && c<=90)    
    {
        return(1);
    }
    else if (97<=c && c<=122)
    {
        return(1);
    }
    else
        return(0);
}

// int main()
// {
//     printf("%d\n",ft_isalpha(' '));
// }