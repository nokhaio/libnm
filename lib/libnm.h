/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnm.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nokhaio <github.com/nokhaio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:05 by nokhaio           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:04 by nokhaio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

typedef struct s_list {
	void          *content;
	struct s_list *next;
} t_list;

typedef struct s_dlist {
	void           *content;
	struct s_dlist *prev;
	struct s_dlist *next;
} t_dlist;

int      nm_isalpha(int c);
int      nm_isdigit(int c);
int      nm_isalnum(int c);
int      nm_isascii(int c);
int      nm_isprint(int c);
int      nm_tolower(int c);
int      nm_toupper(int c);
int      nm_atoi(const char *nptr);
int      nm_memcmp(const void *s1, const void *s2, size_t n);
void    *nm_memset(void *s, int c, size_t n);
void     nm_bzero(void *s, size_t n);
void    *nm_memcpy(void *dest, const void *src, size_t n);
void    *nm_memmove(void *dest, const void *src, size_t n);
void    *nm_memchr(const void *s, int c, size_t n);
size_t   nm_strlcpy(char *dst, const char *src, size_t size);
size_t   nm_strlcat(char *dst, const char *src, size_t size);
size_t   nm_strlen(const char *str);
char    *nm_strchr(const char *s, int c);
char    *nm_strrchr(const char *s, int c);
char    *nm_strnstr(const char *big, const char *little, size_t len);
int      nm_strncmp(const char *s1, const char *s2, size_t n);
void     nm_putchar_fd(char c, int fd);
void     nm_putendl_fd(char *s, int fd);
void     nm_putnbr_fd(int n, int fd);
void     nm_putstr_fd(char *s, int fd);
void     nm_striteri(char *s, void (*f)(unsigned int, char *));
void    *nm_calloc(size_t nmemb, size_t size);
char    *nm_substr(char const *s, unsigned int start, size_t len);
char    *nm_strdup(const char *s);
char    *nm_strjoin(char const *s1, char const *s2);
char    *nm_itoa(int n);
char    *nm_strtrim(char const *s1, char const *set);
char   **nm_split(char const *s, char c);
char    *nm_strmapi(char const *s, char (*f)(unsigned int, char));

int      nm_lstsize(t_list *lst);
void     nm_lstadd_front(t_list **lst, t_list *new);
void     nm_lstadd_back(t_list **lst, t_list *new);
void     nm_lstdelone(t_list *lst, void (*del)(void *));
void     nm_lstclear(t_list **lst, void (*del)(void *));
void     nm_lstiter(t_list *lst, void (*f)(void *));
t_list  *nm_lstnew(void *content);
t_list  *nm_lstlast(t_list *lst);
t_list  *nm_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// size_t nm_strnlen(const char s[], size_t maxlen);
char    *nm_strstr(const char *haystack, const char *needle);
size_t   nm_strcspn(const char *s, const char *reject);
size_t   nm_strspn(const char *s, const char *accept);

t_list  *nm_lstfind(t_list *lst, void *content, int (*cmp)(void *, void *));
void     nm_lstinsert_after(t_list *node, void *content);
t_dlist *nm_dlstnew(void *content);
t_dlist *nm_dlstlast(t_dlist *lst);
void     nm_dlstadd_back(t_dlist **lst, t_dlist *new);
void     nm_dlstadd_front(t_dlist **lst, t_dlist *new);
void     nm_dlstiter(t_dlist *lst, void (*f)(void *));
void     nm_dlstdelone(t_dlist *lst, void (*del)(void *));
void     nm_dlstclear(t_dlist **lst, void (*del)(void *));
void     nm_dlstdel_firts(t_dlist **lst, void (*del)(void *));
t_dlist *nm_dlstfirst(t_dlist *lst);

#endif
