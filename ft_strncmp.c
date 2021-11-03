#include <unistd.h>
#include <stdio.h>
#include <string.h>
int ft_strncmp(const char * s1, const char * s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}