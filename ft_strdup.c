#include"libft.h"
char	*ft_strdup(const char *s)
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