#include"libft.h"
char  *ft_strjoin(char const *s1, char const *s2)
{
	char *dest;
	size_t i;
	size_t j;

	i = 0;
	dest = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (!dest)
		return(NULL);
	if (dest)
	{
		j = 0;
		while (s1[j])
		{
			dest[i] = s1[j];
			i++;
			j++;
		}
		j = 0;
		while (s2[j])
		{
			dest[i] = s2[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
int main()
{
	char *s1="oussama";
	char *s2=" meslalla";
	printf("%s",ft_strjoin(s1,s2));
}