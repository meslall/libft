#include<unistd.h>
#include<stdio.h>
#include<string.h>
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	if (str[i] == 0)
		return (0);
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
    {
		if (str[i] == '-')
        	sign = -1;
        i++;
    }   
	while (str[i] >= '0' && str[i] <= '9')
	{
    	nbr = (nbr * 10) + (str[i] - 48);
        i++;
    }
    return (nbr * sign);
}