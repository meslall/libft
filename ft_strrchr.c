#include"libft.h"
char *ft_strrchr(const char *str,int c)
{
	char *s;
	size_t i;
	s =  (char *)str;
	i = strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return(s + i);
		}
		
		i--;	
	}
	return(NULL);
}
int main()
{
	char *str="abcdefghijkglm";
	printf("%s",ft_strrchr(str,'g'));
}