#include"libft.h"
void *ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s =(unsigned char *)str;
	while (s[i] != '\0' && n > 0)
	{
		s[i] = c;
		n--;
		i++;
	}
	return (str);
}

int main()
{
	unsigned char ar[]="";
	ft_memset(NULL,'*',3*sizeof(char));
	printf("%s",ar);
}