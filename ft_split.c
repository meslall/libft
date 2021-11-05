#include <libft.h>

int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	flag = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
		return (count);
	}
}

static char	*word_in(char const *s, int start, int end)
{
	int		i;
	int		size;
	char	*word;

	i = 0;
	size = end - start;
	word = malloc((size + 1) * sizeof(char));
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

void	*memory_error(char const *s, char c, char **array)
{
	int	i;
	int	size;

	i = 0;
	size = count_words(s, c);
	array = malloc((size + 1) * sizeof(char *));
	if (!s[i] && !array)
	{
		free(array);
		return (0);
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	**array;

	i = 0;
	j = 0;
	k = -1;
	size = ft_strlen(s);
	memory_error(s, c, array);
	while (i <= size)
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == size) && k >= 0)
		{
			array[j] = word_in(s, k, i);
			k = 0;
		}
		i++;
	}
	array[j] = '\0';
	return (array);
}