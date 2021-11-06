#include"libft.h"
char *ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i+j) < n)
		{
			j++;
			if (to_find[j] == '\0')
				return(str + i);
		}
		i++;
	}
	return NULL;
}
int main()
{
	char *str = "oussamaisighdfusd[o9spdfuis oussaa ousssama oussama  nesakla mesallanmesk messla meslalla";
	char *find= "oussamaisighdfusd[o9spdfuis";
	printf("mystr========>%s\n",ft_strnstr(str,find,10));
	printf("org==========>%s",strnstr(str,find,10));

}