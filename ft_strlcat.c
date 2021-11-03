#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while ((i + j) < (size - 1) && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}