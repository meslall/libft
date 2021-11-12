/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:03:25 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/10 19:07:19 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	if (!str)
		return (NULL);
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
	return (str);
}
// int main()
// {
// 	unsigned char b[] = "";
// 	ft_bzero(b+5,5);
// 	printf("%s",b);
// }
