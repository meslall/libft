#include "libft.h"

int ft_isascii(int c)
{
	if (0 <= c && c <= 255)// the extended ascii table
		return (1);
	else
		return (0);
}