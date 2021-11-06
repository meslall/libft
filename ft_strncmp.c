#include"libft.h"
int ft_strncmp(const char *f, const char *s, size_t n)
{
	size_t i;
	i = 0;
	while ((f[i] || s[i]) && i < n)
	{
		if (f[i] != s[i])
			return(f[i] - s[i]);
		i++;
	}
	return(0);
}
int main()
{
	char *s1="";
	char *s2="oussama";
	printf("%d\n",ft_strncmp(s1,s2,8));
	printf("%d",strncmp(s1,s2,8));
}