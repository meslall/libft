/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:49:19 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/10 22:05:07 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<unistd.h>
# include<stdlib.h>
# include<string.h>

/*  REMOVE LATER   */

# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"
/*                   */

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *str, int c, size_t n);
void			*ft_bzero(void *str, size_t n);
int				ft_isprint(int c);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *det, const void *src, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t n);
size_t			ft_strlcat(char *dest, const char *src, size_t n);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(const char *f, const char *s, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp( const void *str1, const void *str2, size_t n);
char			*ft_strnstr(char *str, char *to_find, size_t n);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif
