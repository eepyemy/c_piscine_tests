#include "ex00/ft_putchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"
#include "ex05/ft_print_comb.c"
#include "ex06/ft_print_comb2.c"
#include "ex07/ft_putnbr.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	test_ex00(void)
{
	printf("\nTesting ex00/ft_putchar.c ...\n\n");
	ft_putchar('A');
	printf("\n");
}

void	test_ex01(void)
{
	printf("\nTesting ex01/ft_print_alphabet.c ...\n\n");
	ft_print_alphabet();
	printf("\n");
}

void	test_ex02(void)
{
	printf("\nTesting ex02/ft_print_reverse_alphabet.c ...\n\n");
	ft_print_reverse_alphabet();
	printf("\n");
}

void	test_ex03(void)
{
	printf("\nTesting ex03/ft_print_numbers.c ...\n\n");
	ft_print_numbers();
	printf("\n");
}

void	test_ex04(void)
{
	printf("\nTesting ex04/ft_is_negative.c ...\n\n");
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-23);
	printf("\n");
}

void	test_ex05(void)
{
	printf("\nTesting ex05/ft_print_comb.c ...\n\n");
	ft_print_comb();
	printf("\n");
}

void	test_ex06(void)
{
	printf("\nTesting ex06/ft_print_comb2.c ...\n\n");
	ft_print_comb2();
	printf("\n");
}

void	test_ex07(void)
{
	printf("\nTesting ex07/ft_putnbr.c ...\n\n");
	ft_putnbr(9);
	write(1, " ", 1);
	// 		  1000000000 edge case, cannot multiply by 10 here again
	ft_putnbr(6470);
	write(1, " ", 1);
	ft_putnbr(10);
	write(1, " ", 1);
	ft_putnbr(2147483647);
	write(1, " ", 1);
	ft_putnbr(-2147483647);
	write(1, " ", 1);
	ft_putnbr(1000);
	write(1, " ", 1);
	ft_putnbr(100010);
	write(1, " ", 1);
	ft_putnbr(0);
	write(1, " ", 1);
	ft_putnbr(42);
	write(1, " ", 1);
	ft_putnbr(-9);
	write(1, " ", 1);
	ft_putnbr(-0);
	write(1, " ", 1);
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
