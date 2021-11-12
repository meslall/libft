/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:51:26 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/10 19:02:43 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	rest_nbr(const char *str, int sign, int i)
{
	long	res;
	long	num;

	res = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
		num = (str[i++] - '0') + (num * 10);
	return (num * sign);
}

int	ft_atoi(const char	*str)
{
	long	i;
	long	num;
	int		sign;

	i = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	num = rest_nbr(str, sign, i);
	return (num);
}

// int main()
// {
//     char s[] = "9223372036854775807";
//     // char *sa = ft_atoi(s);
//     printf("%d\n", ft_atoi(s));
//     printf("%d\n", atoi(s));
// }
