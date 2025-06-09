#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	test_ex00(void)
{
	printf("\nTesting ex00/ft_ft.c ...\n\n");
	int* test;

	test = malloc(sizeof(int));
	*test = 0;
	printf("\nBefore: %d", *test);
	ft_ft(test);
	printf("\nAfter: %d", *test);
	printf("\n");
}

void	test_ex01(void)
{
	printf("\nTesting ex01/ft_ultimate_ft.c ...\n\n");
	int********* test;

	test = malloc(sizeof(int********));
	*test = malloc(sizeof(int*******));
	**test = malloc(sizeof(int*******));
	***test = malloc(sizeof(int******));
	****test = malloc(sizeof(int*****));
	*****test = malloc(sizeof(int****));
	******test = malloc(sizeof(int***));
	*******test = malloc(sizeof(int**));
	********test = malloc(sizeof(int*));
	*********test = 0;
	printf("\nBefore: %d", *********test);
	ft_ultimate_ft(test);
	printf("\nAfter: %d", *********test);
	free(********test);
	free(*******test);
	free(******test);
	free(*****test);
	free(****test);
	free(***test);
	free(**test);
	free(*test);
	free(test);
	
	printf("\n");
}

void	test_ex02(void)
{
	printf("\nTesting ex02/ft_swap.c ...\n\n");
	int*	a;
	int*	b;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 25;
	*b = 78;

	printf("\nBefore: %d, %d", *a, *b);
	ft_swap(a,b);
	printf("\nAfter: %d, %d", *a, *b);
	printf("\n");
	free(a);
	free(b);
}

void	test_ex03(void)
{
	printf("\nTesting ex03/ft_div_mod.c ...\n\n");
	int*	a;
	int*	b;
	int c,d;
	c = 17;
	d = 6;
	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	ft_div_mod(c,d,a,b);
	printf("\n%d / %d = %d", c, d, *a);
	printf("\n%d mod %d = %d", c, d, *b);
	printf("\n");
	free(a);
	free(b);
}

void	test_ex04(void)
{
	printf("\nTesting ex04/ft_ultimate_div_mod.c ...\n\n");
	int*	a;
	int*	b;
	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 67;
	*b = 3;
	printf("\nBefore: %d, %d", *a, *b);
	ft_ultimate_div_mod(a,b);
	printf("\nAfter: %d, %d", *a, *b);
	printf("\n");
	free(a);
	free(b);
}

void	test_ex05(void)
{
	printf("\nTesting ex05/ft_putstr.c ...\n\n");
	ft_putstr("This is a string! testing, its working!");
	printf("\n");
}

void	test_ex06(void)
{
	printf("\nTesting ex06/ft_strlen.c ...\n\n");
	printf("\n\"%s\" is %d size", "12345",ft_strlen("12345"));
	printf("\n\"%s\" is %d size", "1234",ft_strlen("1234"));
	printf("\n\"%s\" is %d size", "123",ft_strlen("123"));
	printf("\n\"%s\" is %d size", "1",ft_strlen("1"));
	printf("\n\"%s\" is %d size", "",ft_strlen(""));
	printf("\n");
}

void	test_ex07(void)
{
	printf("\nTesting ex07/ft_rev_int_tab.c ...\n\n");
	int	a[] = {1, 2, 3, 4, 5};
	int	b[] = {1, 2, 3, 4, 5, 6};
	int	c[] = {1};
	int	d[] = {1, 2, 3};
	int	i;
	i = 0;
	while (i < 5)
	{
		printf("%d, ",a[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(a, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d, ",a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 6)
	{
		printf("%d, ",b[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(b, 6);
	i = 0;
	while (i < 6)
	{
		printf("%d, ",b[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 1)
	{
		printf("%d, ",c[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(c, 1);
	i = 0;
	while (i < 1)
	{
		printf("%d, ",c[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 3)
	{
		printf("%d, ",d[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(d, 3);
	i = 0;
	while (i < 3)
	{
		printf("%d, ",d[i]);
		i++;
	}
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
