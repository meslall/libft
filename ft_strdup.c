#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strdup(char *s)
{
	char	*dest;
	int		i;

	i = 0;
	if ((dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
	{
		while (s[i])
		{
			dest[i] = s[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (0);
}