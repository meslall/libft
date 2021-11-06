#include"libft.h"
char *ft_strchr(const char *str, int c)
{
	char *s;
	int  i;
	i = 0;
	s = (char *)str;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (s+i);
		}
		
		i++;
	}
	return (NULL);
}
int main()
{
	char *str="abcdefghijkglm";
	printf("%s",ft_strchr(str,'g'));
}