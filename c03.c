#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	test_ex00(void)
{
	printf("\nTesting ex00/ft_strcmp.c ...\n\n");
	char a[] = "ABC";
	char b[] = "ABC";
	printf("\na: %s, b: %s, ft_strcmp = %d", a, b, ft_strcmp(a, b));
	printf("\na: %s, b: %s, strcmp = %d", a, b, strcmp(a, b));
	printf("\n");

	char c[] = "ABC";
	char d[] = "AB";
	printf("\nc: %s, d: %s, ft_strcmp = %d", c, d, ft_strcmp(c, d));
	printf("\nc: %s, d: %s, strcmp = %d", c, d, strcmp(c, d));
	printf("\n");

	char e[] = "ABA";
	char f[] = "ABZ";
	printf("\ne: %s, f: %s, ft_strcmp = %d", e, f, ft_strcmp(e, f));
	printf("\ne: %s, f: %s, strcmp = %d", e, f, strcmp(e, f));
	printf("\n");

	char g[] = "ABJ";
	char h[] = "ABC";
	printf("\ng: %s, h: %s, ft_strcmp = %d", g, h, ft_strcmp(g, h));
	printf("\ng: %s, h: %s, strcmp = %d", g, h, strcmp(g, h));
	printf("\n");

	char i[] = "\201";
	char j[] = "A";
	printf("\ni: %s, j: %s, ft_strcmp = %d", i, j, ft_strcmp(i, j));
	printf("\ni: %s, j: %s, strcmp = %d", i, j, strcmp(i, j));
	printf("\n");

	char k[] = "";
	char l[] = "";
	printf("\nk: %s, l: %s, ft_strcmp = %d", k, l, ft_strcmp(k, l));
	printf("\nk: %s, l: %s, strcmp = %d", k, l, strcmp(k, l));
	printf("\n");

}

void	test_ex01(void)
{
	printf("\nTesting ex01/ft_strncmp.c ...\n\n");
	char a[] = "ABCD";
	char b[] = "ABCA";
	int	n1 = 3;
	printf("\na: %s, b: %s, n: %d, ft_strncmp = %d", a, b, n1, ft_strncmp(a, b, n1));
	printf("\na: %s, b: %s, strncmp = %d", a, b, strncmp(a, b, n1));
	printf("\n");
	
	char c[] = "ABC";
	char d[] = "AB";
	int	n2 = 3;
	printf("\nc: %s, d: %s, n: %d, ft_strncmp = %d", c, d, n2, ft_strncmp(c, d, n2));
	printf("\nc: %s, d: %s, strncmp = %d", c, d, strncmp(c, d, n2));
	printf("\n");

	char e[] = "ABA";
	char f[] = "ABZ";
	int	n3 = 2;
	printf("\ne: %s, f: %s, n: %d, ft_strncmp = %d", e, f, n3, ft_strncmp(e, f, n3));
	printf("\ne: %s, f: %s, strncmp = %d", e, f, strncmp(e, f, n3));
	printf("\n");

	char g[] = "ABJ";
	char h[] = "ABC";
	int	n4 = 1;
	printf("\ng: %s, h: %s, n: %d, ft_strncmp = %d", g, h, n4, ft_strncmp(g, h, n4));
	printf("\ng: %s, h: %s, strncmp = %d", g, h, strncmp(g, h, n4));
	printf("\n");

	char i[] = "\201";
	char j[] = "A";
	int	n5 = 0;
	printf("\ni: %s, j: %s, n: %d, ft_strncmp = %d", i, j, n5, ft_strncmp(i, j, n5));
	printf("\ni: %s, j: %s, strncmp = %d", i, j, strncmp(i, j, n5));
	printf("\n");
}

void	test_ex02(void)
{
	printf("\nTesting ex02/ft_strcat.c ...\n\n");
	char a[9] = "ABCD";
	char b[] = "ABCA";
	printf("\nfirst: %s, second: %s,", a, b);
	printf( " ft_strcat = %s",  ft_strcat(a, b));
	char c[9] = "ABCD";
	char d[] = "ABCA";
	printf("\nfirst: %s, second: %s, ", c, d); 
	printf("strcat = %s", strcat(c, d));
	printf("\n");
	
	char e[5] = "AC";
	char f[] = "AB";
	printf("\nfirst: %s, second: %s,", e, f);
	printf( " ft_strcat = %s",  ft_strcat(e, f));
	char g[5] = "AC";
	char h[] = "AB";
	printf("\nfirst: %s, second: %s, ", g, h); 
	printf("strcat = %s", strcat(g, h));
	printf("\n");
}

void	test_ex03(void)
{
	printf("\nTesting ex03/ft_strncat.c ...\n\n");
	char a[9] = "ABCD";
	char b[] = "ABCA";
	int n = 1;
	printf("\nn = %d", n);
	printf("\nfirst: %s, second: %s,", a, b);
	printf( " ft_strncat = %s",  ft_strncat(a, b, n));
	char c[9] = "ABCD";
	char d[] = "ABCA";
	printf("\nfirst: %s, second: %s, ", c, d); 
	printf("strncat = %s", strncat(c, d, n));
	printf("\n");
	
	char e[5] = "AC";
	char f[] = "AB";
	printf("\nfirst: %s, second: %s,", e, f);
	printf( " ft_strncat = %s",  ft_strncat(e, f, n));
	char g[5] = "AC";
	char h[] = "AB";
	printf("\nfirst: %s, second: %s, ", g, h); 
	printf("strncat = %s", strncat(g, h, n));
	printf("\n");
}

void	test_ex04(void)
{
	printf("\nTesting ex04/ft_strstr.c ...\n\n");
	char a[] = "ababababababcdddddddde";
	char b[] = "abc";
	printf("\nfirst: %s, second: %s,", a, b);
	printf( " ft_strstr = %s",  ft_strstr(a, b));
	char c[] = "ababababababcdddddddde";
	char d[] = "abc";
	printf("\nfirst: %s, second: %s,", c, d);
	printf( " strstr = %s",  strstr(c, d));
	
	char e[] = "ababababababcdddddddde";
	char f[] = "b";
	printf("\nfirst: %s, second: %s,", e, f);
	printf( " ft_strstr = %s",  ft_strstr(e, f));
	char g[] = "ababababababcdddddddde";
	char h[] = "b";
	printf("\nfirst: %s, second: %s,", g, h);
	printf( " strstr = %s",  strstr(g, h));

	char i[] = "ababababababcdddddddde";
	char j[] = "d";
	printf("\nfirst: %s, second: %s,", i, j);
	printf( " ft_strstr = %s",  ft_strstr(i, j));
	char k[] = "ababababababcdddddddde";
	char l[] = "d";
	printf("\nfirst: %s, second: %s,", k, l);
	printf( " strstr = %s",  strstr(k, l));

	char m[] = "ababababababcdddddddde";
	char n[] = "egba";
	printf("\nfirst: %s, second: %s,", m, n);
	printf( " ft_strstr = %s",  ft_strstr(m, n));
	char o[] = "ababababababcdddddddde";
	char p[] = "egba";
	printf("\nfirst: %s, second: %s,", o, p);
	printf( " strstr = %s",  strstr(o, p));

	char r[] = "ababababababcdddddddde";
	char s[] = "x";
	printf("\nfirst: %s, second: %s,", r, s);
	printf( " ft_strstr = %s",  ft_strstr(r, s));
	char t[] = "ababababababcdddddddde";
	char u[] = "x";
	printf("\nfirst: %s, second: %s,", t, u);
	printf( " strstr = %s",  strstr(t, u));
	printf("\n");

	char x[] = "ababababababcdddddddde";
	char y[] = "egba";
	printf("\nfirst: %s, second: %s,", x, y);
	printf( " ft_strstr = %s",  ft_strstr(x, y));
	char z[] = "ababababababcdddddddde";
	char w[] = "egba";
	printf("\nfirst: %s, second: %s,", z, w);
	printf( " strstr = %s",  strstr(z, w));
}

void	test_ex05(void)
{
	printf("\nTesting ex05/ft_strlcat.c ...\n\n");
	printf("\n");
}

void	test_all(void)
{
test_ex00();
test_ex01();
test_ex02();
test_ex03();
test_ex04();
test_ex05();
}

void	test_i(int i)
{
if(i == 0) test_ex00();
if(i == 1) test_ex01();
if(i == 2) test_ex02();
if(i == 3) test_ex03();
if(i == 4) test_ex04();
if(i == 5) test_ex05();
}

int	main(int argc, char *argv[])
{
	int		i;

	i = 1;
	while(i <= argc - 1)
	{
		int		arg;
		arg = atoi(argv[i]);
		test_i(arg);
		i++;
	}
	if(argc == 1)
		test_all();
	printf("\n");
	return (0);
}
