#include "libft.h"

void  *ft_memcpy(void * restrict dst, const  void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dst);
}
// int main()
// {
// 	char src[]="oussama meslalla";
// 	char dst[10];

// 	ft_memcpy(dst,src, 10);
// 	printf("result =====> %s", dst);
// }