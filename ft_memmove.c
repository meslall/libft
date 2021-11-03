#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void *ft_memmove (void *dest, const void *src, size_t n)
{
    unsigned char *tmp;
    if (dest == NULL || src == NULL)
    {
        return(NULL);
    }
    tmp = (unsigned char *) malloc (sizeof(unsigned char) * n);
    ft_memcpy(tmp,src,n);
    ft_memcpy(dest,tmp,n);
    free(tmp);
    return(dest);
}
int main()
{
    char str1[] = "Geeks"; 
    char str2[] = "Quiz";
 
    puts("str1 before memmove ");
    puts(str1);
 
    /* Copies contents of str2 to sr1 */
    ft_memmove(str1, str2, sizeof(str2));
 
    puts("\nstr1 after memmove ");
    puts(str1);
    return 0;
}