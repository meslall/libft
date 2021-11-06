#include"libft.h"
size_t ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	while (dest[i] && i < n)
		i++;
	while (src[j] && (i + j) < (n - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < n)
		dest[i + j]= 0;
	return(i+strlen(src));
}

int main()
{
	char dest[10];
	char src[]="oussama";
	printf("my======>%lu\n",ft_strlcat(dest,src,3));
	printf("org=====>%lu\n",strlcat(dest,src,3));
	// printf("%s\n",dest);
	return (0);
}