#include"libft.h"
void *ft_calloc(size_t count, size_t size)
{
	size_t i;
	void *str;
	
	i = count * size;
	str = malloc(i);
	return (ft_bzero(str, i));
}