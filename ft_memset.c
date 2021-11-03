#include <unistd.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	tmp = (unsigned char*)s;
	while (n > 0)
	{
		*tmp = c;
		tmp++;
		n--;
	}
	return (s);
}
int main (void)
{
    char str[] ="oussama meslalla" ;
    printf("before : %s\n", str);
    ft_memset(str +2,'/',4);
    printf("after : %s\n", str);
    return 0;
}