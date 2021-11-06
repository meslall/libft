#include"libft.h"
size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t j;
	size_t i;
	i = 0;
	j = 0;
	while (src[i])
		i++;
	j = 0;
	while (src[j] && j < n && n != 0)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
int main()
{
	char dest[10]="";
	char str[]="sdljgsoiu";
	printf("%lu\n",ft_strlcpy(dest,str+5,5));
	printf("%lu",strlcpy(dest,str+5,5));
}