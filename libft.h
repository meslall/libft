#ifndef  LIBFT_H_
#define  LIBFT_H_

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
size_t ft_strlen(const char *str);
void *ft_memset(void *str, int c, size_t n);
void *ft_bzero(void *str, size_t n);
int	ft_isprint(int c);
void  *ft_memcpy(void * restrict dst, const  void *src, size_t n);
void *ft_memmove(void *det, const void *src, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t n);
size_t ft_strlcat(char *dest, const char *src, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str,int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_strncmp(const char *f, const char *s, size_t n);


#endif