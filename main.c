#include "lib/libnm.h"
#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

void nm_puts(void *s)
{
	char *ss = s;
	nm_putstr_fd(ss, 1);
}

void ft_putcharf(int c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}

void ft_putnbr_hexf(unsigned int nbr, char c, int *length)
{
	if (nbr / 16)
		ft_putnbr_hexf(nbr / 16, c, length);
	if (nbr % 16 < 10)
		ft_putcharf(nbr % 16 + '0', length);
	else
		ft_putcharf(nbr % 16 + c - 10, length);
}

void ft_puthex(unsigned int num, char c, int *length)
{
	if (c == 'x')
		ft_putnbr_hexf(num, 'a', length);
	if (c == 'X')
		ft_putnbr_hexf(num, 'A', length);
}

void ft_putptrf(uintptr_t nbr, int *length)
{
	if (nbr / 16)
		ft_putptrf(nbr / 16, length);
	if (nbr % 16 < 10)
		ft_putcharf(nbr % 16 + '0', length);
	else
		ft_putcharf(nbr % 16 + 'a' - 10, length);
}

void ft_printptr(void *ptr, int *length)
{
	uintptr_t nbr;

	if (ptr == NULL) {
		puts("(nil)");
		return;
	}
	nbr = (uintptr_t) ptr;
	puts("0x");
	ft_putptrf(nbr, length);
}

void print_splited(char *s, char **arr)
{
	printf("'%s' ->{ ", s);
	size_t i = 0;
	while (arr[i]) {
		printf("'%s' ", arr[i]);
		i++;
	}

	if (arr[i] == NULL)
		printf("NULL");

	printf(" }\n");
}

int main(void)
{
	char  *s1 = "";
	char  *s5 = "a,b,c,d,e,f";
	char  *s2 = ",";
	char  *s3 = ",,,";
	char  *s4 = "abcdef";
	char  *s6 = ",a,b,c,d,e,f,";
	char  *s7 = ",a,b,c,d,e,f";
	char  *s8 = "a,b,c,d,e,f,";
	char  *s9 = "a,bbbbbbbb,c,d,e,f,";
	char  *s10 = "a,b,,,,,,c,d,e,f,";

	char **arrs5 = nm_split(s5, ',');
	char **arrs1 = nm_split(s1, ',');
	char **arrs2 = nm_split(s2, ',');
	char **arrs3 = nm_split(s3, ',');
	char **arrs4 = nm_split(s4, ',');
	char **arrs6 = nm_split(s6, ',');
	char **arrs7 = nm_split(s7, ',');
	char **arrs8 = nm_split(s8, ',');
	char **arrs9 = nm_split(s9, ',');
	char **arrs10 = nm_split(s10, ',');

	print_splited(s1, arrs1);
	print_splited(s2, arrs2);
	print_splited(s3, arrs3);
	print_splited(s4, arrs4);
	print_splited(s5, arrs5);
	print_splited(s6, arrs6);
	print_splited(s7, arrs7);
	print_splited(s8, arrs8);
	print_splited(s9, arrs9);
	print_splited(s10, arrs10);

	char   *ss1 = "first\n";
	char   *ss2 = "second\n";
	char   *ss3 = "third\n";
	char   *ss4 = "forth\n";
	char   *ss5 = "fifth\n";
	char   *ss0 = "ZERO\n";

	t_list *l = nm_lstnew(nm_strdup(ss1));
	nm_lstadd_back(&l, nm_lstnew(nm_strdup(ss2)));
	nm_lstadd_back(&l, nm_lstnew(nm_strdup(ss3)));
	nm_lstadd_back(&l, nm_lstnew(nm_strdup(ss4)));
	nm_lstadd_front(&l, nm_lstnew(nm_strdup(ss0)));

	nm_lstiter(l, nm_puts);

	t_dlist *dl = nm_dlstnew(nm_strdup(ss1));

	nm_dlstadd_back(&dl, nm_dlstnew(nm_strdup(ss2)));
	nm_dlstadd_back(&dl, nm_dlstnew(nm_strdup(ss3)));
	nm_dlstadd_back(&dl, nm_dlstnew(nm_strdup(ss4)));
	nm_dlstadd_back(&dl, nm_dlstnew(nm_strdup(ss5)));
	nm_dlstadd_front(&dl, nm_dlstnew(nm_strdup(ss0)));
	nm_dlstiter(dl, nm_puts);

	t_dlist *dlast = nm_dlstlast(dl);

	printf("\nlast: %s\n", (char *) dlast->content);

	t_dlist *dfirst = nm_dlstfirst(dlast);
	printf("first: %s\n", (char *) dfirst->content);

	// uintptr_t   p = (uintptr_t) dlast;
	uint64_t    p = (uint64_t) dlast;
	static char digits[] = "0123456789ABCDEF";

	printf("%p\n", dlast);
	printf("%ld\n", (uintptr_t) dlast);
	for (size_t i = 0; i < sizeof(uintptr_t) * 2; ++i) {
		unsigned int x = p >> (sizeof(uintptr_t) * 8 - 4);
		printf("%c", digits[p >> (sizeof(uintptr_t) * 8 - 4)]);
		p <<= 4;
	}

	return 0;
}
