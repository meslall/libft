#include"libft.h"
int beg(char const *s1, char const *set) 
{
    int  i;
    int  j;

    i = 0;
    while (s1[i])
    {
        j = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
                break;
            if (set[j + 1] == '\0')
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
int end(char const *s1, char const *set)
{
    int  i;
    int  j;

    i = strlen(s1) - 1;
    while (s1[i])
    {
        j = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
                break;
            if (set[j + 1] == '\0')
                return (i);
            j++;
        }
        i--;
    }
    return (i);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int    i;
    int    j;
    int    k;
    char    *str;

    if (!s1 || !set) 
        return (NULL);
    i = beg(s1, set);
    j = end(s1, set);
    k = j - i + 1;
    if (k < 0)
        k = 0;
    str = ft_substr(s1, i, k);
    return (str);
}
int main(void)
{
    char s[]="abaaba";
    char set[]="abc";

    printf("%s\n" , ft_strtrim(s,set));
}