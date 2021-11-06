#include"libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *temp;
	temp = (unsigned char *)malloc(sizeof(unsigned char)*n);
	ft_memcpy(temp,src,n);
	ft_memcpy(dest,temp,n);
	free(temp);
	return (dest);
}

int main()
{
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);
     
    // when overlap happens then it just ignore it
    ft_memcpy(first + 8, first, 10);
    printf("ft_memcpy overlap : %s\n ", str);
 
    // when overlap it start from first position
    ft_memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);
 
    return 0;
}