#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void	test_ex00(void)
{
	printf("\nTesting ex00/ft_strcpy.c ...\n\n");
	
	char a[] = "Hello world!";
	char b[50] = "";
	printf("\na: %s", a);
	printf("\nb before strcpy: %s", b);
	strcpy(b, a);
	printf("\nb after strcpy: %s", b);
	char c[50] = "";
	printf("\nc before ft_strcpy: %s", c);
	ft_strcpy(c, a);
	printf("\nc after ft_strcpy: %s", c);
	printf("\n");
}

void	test_ex01(void)
{
	printf("\nTesting ex01/ft_strncpy.c ...\n\n");
	char a[] = "Hello world!";
	char b[50] = "I'm a string!";
	printf("\na: %s", a);
	printf("\nb before strncpy: %s", b);
	strncpy(b, a, 3);
	printf("\nb after strncpy: %s", b);
	char c[50] = "I'm a string!";
	printf("\nc before ft_strncpy: %s", c);
	ft_strncpy(c, a, 3);
	printf("\nc after ft_strncpy: %s", c);
	
	char d[50] = "11111111111111111111111111111";
	printf("\nd before ft_strncpy: %s", d);
	ft_strncpy(d, a, 20);
	printf("\nd after ft_strncpy: %s", d);

	char e[50] = "11111111111111111111111111111";
	printf("\ne before ft_strncpy: %s", e);
	strncpy(e, a, 20);
	printf("\ne after ft_strncpy: %s", e);
	printf("\n");
}

void	test_ex02(void)
{
	printf("\nTesting ex02/ft_str_is_alpha.c ...\n\n");
	char a[] = "";
	char b[] = "Hello!";
	char c[] = "Validtest";
	printf("\na: %s, is_alpha: %d", a, ft_str_is_alpha(a));
	printf("\nb: %s, is_alpha: %d", b, ft_str_is_alpha(b));
	printf("\nc: %s, is_alpha: %d", c, ft_str_is_alpha(c));
	printf("\n");
}

void	test_ex03(void)
{
	printf("\nTesting ex03/ft_str_is_numeric.c ...\n\n");
	char a[] = "";
	char b[] = "Hello!";
	char c[] = "123213";
	printf("\na: %s, is_numeric: %d", a, ft_str_is_numeric(a));
	printf("\nb: %s, is_numeric: %d", b, ft_str_is_numeric(b));
	printf("\nc: %s, is_numeric: %d", c, ft_str_is_numeric(c));
	printf("\n");
}

void	test_ex04(void)
{
	printf("\nTesting ex04/ft_str_is_lowercase.c ...\n\n");
	char a[] = "";
	char b[] = "Hello";
	char c[] = "hell";
	printf("\na: %s, is_lowercase: %d", a, ft_str_is_lowercase(a));
	printf("\nb: %s, is_lowercase: %d", b, ft_str_is_lowercase(b));
	printf("\nc: %s, is_lowercase: %d", c, ft_str_is_lowercase(c));
	printf("\n");
}

void	test_ex05(void)
{
	printf("\nTesting ex05/ft_str_is_uppercase.c ...\n\n");
	char a[] = "";
	char b[] = "HELLO";
	char c[] = "Hello";
	printf("\na: %s, is_uppercase: %d", a, ft_str_is_uppercase(a));
	printf("\nb: %s, is_uppercase: %d", b, ft_str_is_uppercase(b));
	printf("\nc: %s, is_uppercase: %d", c, ft_str_is_uppercase(c));
	printf("\n");
}

void	test_ex06(void)
{
	printf("\nTesting ex06/ft_str_is_printable.c ...\n\n");
	char a[] = "";
	char b[] = "HELLO\n";
	char c[] = " !\"#$&\'()*,-/0123456789:;=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ^`abcdefghijklmnopqrstuvwxyz{|}~";
	printf("\na: %s, is_printable: %d", a, ft_str_is_printable(a));
	printf("\nb: %s, is_printable: %d", b, ft_str_is_printable(b));
	printf("\nc: %s, is_printable: %d", c, ft_str_is_printable(c));
	printf("\n");
}

void	test_ex07(void)
{
	printf("\nTesting ex07/ft_strupcase.c ...\n\n");
	char a[] = "";
	char b[] = "Hello!";
	char c[] = "Validtest";
	printf("\na: %s", a);
	printf(", upcase: %s", ft_strupcase(a));
	printf("\nb: %s", b);
	printf(", upcase: %s", ft_strupcase(b));
	printf("\nc: %s", c);
	printf(", upcase: %s", ft_strupcase(c));
	printf("\n");
}

void	test_ex08(void)
{
	printf("\nTesting ex08/ft_strlowcase.c ...\n\n");
	char a[] = "";
	char b[] = "Hello!";
	char c[] = "Validtest";
	printf("\na: %s", a);
	printf(", lowcase: %s", ft_strlowcase(a));
	printf("\nb: %s", b);
	printf(", lowcase: %s", ft_strlowcase(b));
	printf("\nc: %s", c);
	printf(", lowcase: %s", ft_strlowcase(c));
	printf("\n");
}

void	test_ex09(void)
{
 	printf("\nTesting ex09/ft_strcapitalize.c ...\n\n");
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
test_ex06();
test_ex07();
test_ex08();
test_ex09();
}

void	test_i(int i)
{
if(i == 0) test_ex00();
if(i == 1) test_ex01();
if(i == 2) test_ex02();
if(i == 3) test_ex03();
if(i == 4) test_ex04();
if(i == 5) test_ex05();
if(i == 6) test_ex06();
if(i == 7) test_ex07();
if(i == 8) test_ex08();
if(i == 9) test_ex09();
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
