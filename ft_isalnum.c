#include"libft.h"

int ft_isalnum(int c)
{
    if (48<=c && c<=57)
    {
        return(1);
    }
    else if ((65<=c && c<=90)
     || (97<=c && c<=122))
    {
        return(1);
    }
    else
        return(0);
}

// int main()
// {
//     printf("%d\n",ft_isalnum(''));
// }