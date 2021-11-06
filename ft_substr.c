#include"libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;

    i = 0;
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (s[start + i] && i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
// int main()
// {
// 	char *str="oussama";
// 	printf("%s",ft_substr(str,0,1));
// }