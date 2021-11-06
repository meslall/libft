#include"libft.h"
void *ft_bzero(void *str, size_t n)
{
	size_t	i;
	unsigned char *s;
	i = 0;

	s =(unsigned char *)str;
	if(!str)
		return(NULL);
	while (s[i] && n > 0)
	{
		s[i] = '\0';
		i++;
		n--;
	}
	return (str);
}
int main()
{
	unsigned char b[] = "";
	ft_bzero(b+5,5);
	printf("%s",b);
}