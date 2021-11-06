#include"libft.h"
int ft_tolower(int c)
{
	if(65<=c&&c<=90)
		c += 32;
	return(c);
}
int main()
{
	int c;
	c = ft_tolower('B');
	printf("%c",c);
}