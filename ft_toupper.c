#include"libft.h"
int ft_toupper(int c)
{
	if (97<=c && c<=122)
		c -= 32;
	return (c);
}
int main()
{
	int c;
	c = ft_toupper('4');
	printf("%c",c);
}