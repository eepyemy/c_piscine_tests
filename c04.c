#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"
#include "ex04/ft_putnbr_base.c"
#include "ex05/ft_atoi_base.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

void	test_ex00(void)
{
	printf("\nTesting ex00/ft_strlen.c ...\n\n");
	char a[] = "";
	char b[] = "1";
	char c[] = "12";
	char d[] = "123";
	
	printf("\nstr: %s, len: %d", a, ft_strlen(a));
	printf("\nstr: %s, len: %d", b, ft_strlen(b));
	printf("\nstr: %s, len: %d", c, ft_strlen(c));
	printf("\nstr: %s, len: %d", d, ft_strlen(d));
	printf("\n");
}

void	test_ex01(void)
{
	printf("\nTesting ex01/ft_putstr.c ...\n\n");
	char a[] = "";
	char b[] = "1";
	char c[] = "12";
	char d[] = "123";
	
	ft_putstr("ft_putstr: ");
	ft_putstr(a);
	printf("\nstr: %s\n", a);
	ft_putstr("ft_putstr: ");
	ft_putstr(b);
	printf("\nstr: %s\n", b);
	ft_putstr("ft_putstr: ");
	ft_putstr(c);
	printf("\nstr: %s\n", c);
	ft_putstr("ft_putstr: ");
	ft_putstr(d);
	printf("\nstr: %s\n", d);
	printf("\n");
}

void	test_ex02(void)
{
	printf("\nTesting ex02/ft_putnbr.c ...\n\n");
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-0);
	write(1, "\n", 1);
	ft_putnbr(7);
	write(1, "\n", 1);
	ft_putnbr(10);
	write(1, "\n", 1);
	ft_putnbr(16);
	write(1, "\n", 1);
	ft_putnbr(-7);
	write(1, "\n", 1);
	ft_putnbr(-10);
	write(1, "\n", 1);
	ft_putnbr(-16);
	write(1, "\n", 1);
	ft_putnbr(100100);
	write(1, "\n", 1);
	ft_putnbr(-1000100);
	write(1, "\n", 1);
	ft_putnbr(INT_MAX);
	write(1, "\n", 1);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	ft_putnbr(11111211);
	
	printf("\n");
}

void	test_ex03(void)
{
	printf("\nTesting ex03/ft_atoi.c ...\n\n");
	char a[] = "a-----+++123";
	printf("\nstr: %s, ft_atoi: %d", a, ft_atoi(a));
	char b[] = " ----- ---123";
	printf("\nstr: %s, ft_atoi: %d", b, ft_atoi(b));
	char c[] = "     \t\r\n\v\f+-+++-+---------123213dfasdfdg";
	printf("\nstr: %s, ft_atoi: %d", c, ft_atoi(c));
	char d[] = "123213dfasdfdg";
	printf("\nstr: %s, ft_atoi: %d", d, ft_atoi(d));
	char e[] = "123213";
	printf("\nstr: %s, ft_atoi: %d", e, ft_atoi(e));
	char f[] = "7";
	printf("\nstr: %s, ft_atoi: %d", f, ft_atoi(f));
	char g[] = "";
	printf("\nstr: %s, ft_atoi: %d", g, ft_atoi(g));
	printf("\n");
}

void	test_ex04(void)
{
 	printf("\nTesting ex04/ft_putnbr_base.c ...\n\n");
	ft_putnbr_base(INT_MAX, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(15, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(15, "");
	ft_putnbr_base(15, "0123456789AB-CDEF");
	ft_putnbr_base(15, "0123456789AB+CDEF");
	ft_putnbr_base(15, "0122226789ABCDEF");
	ft_putnbr_base(15, "a");
 	printf("\n");
}

void	test_ex05(void)
{
 	printf("\nTesting ex05/ft_atoi_base.c ...\n\n");
	char a[] = "+-+++-+---------123213.123213dfasdfdg";
	char base1[] = "0";
	printf("\nstr: %s, base: %s, ft_atoi_base: %d", a, base1, ft_atoi_base(a, base1));
	char b[] = "+-+++-+--------123213";
	char base2[] = "";
	printf("\nstr: %s, base: %s, ft_atoi_base: %d", b, base2, ft_atoi_base(b, base2));
	char base3[] = "012";
	char c[] = "     \t\r\n\v\f+-+++-+---------123213dfasdfdg";
	printf("\nstr: %s, base: %s, ft_atoi_base: %d", c, base3, ft_atoi_base(c, base3));
	char base4[] = "012";
	char d[] = "123213dfasdfdg";
	printf("\nstr: %s, base: %s, ft_atoi_base: %d", d, base4, ft_atoi_base(d, base4));
	char base5[] = "0123";
	char e[] = "123213";
	printf("\nstr: %s, base: %s, ft_atoi_base: %d", e, base5, ft_atoi_base(e, base5));
	char base6[] = "poneyvif";
	char f[] = "offffffffff";
	printf("\nstr: %s, base: %s, ft_atoi_base: %d", f, base6, ft_atoi_base(f, base6));
	char base7[] = "0123456789ABCDEF";
	char g[] = "+-+++-+---------asdFsa";
	printf("\nstr: %s, base: %s, ft_atoi_base: %d", g, base7, ft_atoi_base(g, base7));
	char base8[] = "0123456789ABCDEF";
	char h[] = "";
	printf("\nstr: %s, base: %s, ft_atoi_base: %d", h, base8, ft_atoi_base(h, base8));
 	char base9[] = "0123456789";
	char l[] = "2147483647";
	printf("\nstr: %s, base: %s, ft_atoi_base: %d", l, base9, ft_atoi_base(l, base9));
	char base10[] = "0123456789";
	char m[] = "+-+++-+------- --1232";
	printf("\nstr: %s, base: %s, ft_atoi_base: %d", m, base10, ft_atoi_base(m, base10));
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
