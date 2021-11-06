#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
	}
		return (count);
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

char	**memory(char const *s, char c)
{
	int	i;
	int	size;
	char **array;

	i = 0;
	size = count_words(s, c);
	array = malloc((size + 1) * sizeof(char *));
	if (!s[i] && !array)
	{
		free(array);
		return (0);
	}
	array[size] = NULL;
	return(array);
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
	size = strlen(s);
	array = memory(s, c);
	while(array)
	{
		while (i <= size)
		{
			if (s[i] != c && k < 0)
				k = i;
			else if ((s[i] == c || i == size) && k >= 0)
			{
				array[j] = word_in(s, k, i);
				k = -1;
			}
			i++;
		}
		j++;
	}
	// array[j] = NULL;
	return (array);
}
int main()
{
    char months[] = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;

    // printf("months=[%s]\n\n", months);

    tokens = ft_split(months, ',');

    // if (tokens)
    // {
    //     int i;
    //     for (i = 0; *(tokens + i); i++)
    //     {
    //         printf("month=[%s]\n", *(tokens + i));
    //         free(*(tokens + i));
    //     }
    //     printf("\n");
    //     free(tokens);
    // }

	int i = 0;

	while (tokens[i])
	{
		printf("month=[%s]\n", tokens[i]);
		i++;
	}

    return 0;
}