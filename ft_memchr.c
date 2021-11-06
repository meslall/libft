#include"libft.h"
void *ft_memchr(const void *str,int c,size_t n)
{
	unsigned char *s;
	size_t i;

	i = 0;
	s = (unsigned char*)str;
	while (s[i] && i < n)
	{
		if (s[i] == c)
			return(s + i);
		i++;
	}
	return(NULL);
}
int main() {

    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    // On recherche une valeur inhéxistante :
    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

    return EXIT_SUCCESS;
}