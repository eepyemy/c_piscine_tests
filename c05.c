#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"
#include "ex08/ft_ten_queens_puzzle.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	test_ex00(void)
{
	printf("\nTesting ex00/ft_iterative_factorial.c ...\n\n");
	printf("\nnumber: %d, iterative_factorial: %d", 0, ft_iterative_factorial(0));
	printf("\nnumber: %d, iterative_factorial: %d", 1, ft_iterative_factorial(1));
	printf("\nnumber: %d, iterative_factorial: %d", 2, ft_iterative_factorial(2));
	printf("\nnumber: %d, iterative_factorial: %d", 3, ft_iterative_factorial(3));
	printf("\nnumber: %d, iterative_factorial: %d", 4, ft_iterative_factorial(4));
	printf("\nnumber: %d, iterative_factorial: %d", 5, ft_iterative_factorial(5));
	printf("\nnumber: %d, iterative_factorial: %d", 6, ft_iterative_factorial(6));
	printf("\nnumber: %d, iterative_factorial: %d", -15, ft_iterative_factorial(-15));
	printf("\nnumber: %d, iterative_factorial: %d", -1, ft_iterative_factorial(-1));
	printf("\n");
}

void	test_ex01(void)
{
	printf("\nTesting ex01/ft_recursive_factorial.c ...\n\n");
	printf("\nnumber: %d, iterative_factorial: %d", 0, ft_recursive_factorial(0));
	printf("\nnumber: %d, iterative_factorial: %d", 1, ft_recursive_factorial(1));
	printf("\nnumber: %d, iterative_factorial: %d", 2, ft_recursive_factorial(2));
	printf("\nnumber: %d, iterative_factorial: %d", 3, ft_recursive_factorial(3));
	printf("\nnumber: %d, iterative_factorial: %d", 4, ft_recursive_factorial(4));
	printf("\nnumber: %d, iterative_factorial: %d", 5, ft_recursive_factorial(5));
	printf("\nnumber: %d, iterative_factorial: %d", 6, ft_recursive_factorial(6));
	printf("\nnumber: %d, iterative_factorial: %d", -15, ft_recursive_factorial(-15));
	printf("\nnumber: %d, iterative_factorial: %d", -1, ft_recursive_factorial(-1));
	printf("\n");
}

void	test_ex02(void)
{
	printf("\nTesting ex02/ft_iterative_power.c ...\n\n");
	printf("\nnumber: %d, power: %d, iterative_power: %d", 0, 0, ft_iterative_power(0, 0));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, -4, ft_iterative_power(2, -4));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 0, ft_iterative_power(2, 0));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 1, ft_iterative_power(2, 1));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 2, ft_iterative_power(2, 2));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 3, ft_iterative_power(2, 3));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 4, ft_iterative_power(2, 4));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 5, ft_iterative_power(2, 5));
	printf("\nnumber: %d, power: %d, iterative_power: %d", -2, 5, ft_iterative_power(-2, 5));
	printf("\nnumber: %d, power: %d, iterative_power: %d", -2, 5, ft_iterative_power(-2, 4));
	printf("\n");
}

void	test_ex03(void)
{
	printf("\nTesting ex03/ft_recursive_power.c ...\n\n");
	printf("\nnumber: %d, power: %d, iterative_power: %d", 0, 0, ft_recursive_power(0, 0));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, -4, ft_recursive_power(2, -4));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 0, ft_recursive_power(2, 0));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 1, ft_recursive_power(2, 1));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 2, ft_recursive_power(2, 2));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 3, ft_recursive_power(2, 3));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 4, ft_recursive_power(2, 4));
	printf("\nnumber: %d, power: %d, iterative_power: %d", 2, 5, ft_recursive_power(2, 5));
	printf("\nnumber: %d, power: %d, iterative_power: %d", -2, 5, ft_recursive_power(-2, 5));
	printf("\nnumber: %d, power: %d, iterative_power: %d", -2, 5, ft_recursive_power(-2, 4));
	printf("\n");
}

void	test_ex04(void)
{
	printf("\nTesting ex04/ft_fibonacci.c ...\n\n");
	printf("\nnumber: %d, fibonacci: %d", 1, ft_fibonacci(1));
	printf("\nnumber: %d, fibonacci: %d", 2, ft_fibonacci(2));
	printf("\nnumber: %d, fibonacci: %d", 3, ft_fibonacci(3));
	printf("\nnumber: %d, fibonacci: %d", 4, ft_fibonacci(4));
	printf("\nnumber: %d, fibonacci: %d", 5, ft_fibonacci(5));
	printf("\nnumber: %d, fibonacci: %d", 6, ft_fibonacci(6));
	printf("\nnumber: %d, fibonacci: %d", -15, ft_fibonacci(-15));
	printf("\nnumber: %d, fibonacci: %d", 0, ft_fibonacci(0));
	printf("\n");
}

void	test_ex05(void)
{
	printf("\nTesting ex05/ft_sqrt.c ...\n\n");
	printf("\nnumber: %d, sqrt: %d", 1, ft_sqrt(1));
	printf("\nnumber: %d, sqrt: %d", 4, ft_sqrt(4));
	printf("\nnumber: %d, sqrt: %d", 16, ft_sqrt(16));
	printf("\nnumber: %d, sqrt: %d", 25, ft_sqrt(25));
	printf("\nnumber: %d, sqrt: %d", 144, ft_sqrt(144));
	printf("\nnumber: %d, sqrt: %d", 143, ft_sqrt(143));
	printf("\nnumber: %d, sqrt: %d", -15, ft_sqrt(-15));
	printf("\nnumber: %d, sqrt: %d", 0, ft_sqrt(0));
	printf("\n");
}

void	test_ex06(void)
{
	printf("\nTesting ex06/ft_is_prime.c ...\n\n");
	printf("\nnumber: %d, is_prime: %d", 1, ft_is_prime(1));
	printf("\nnumber: %d, is_prime: %d", 4, ft_is_prime(4));
	printf("\nnumber: %d, is_prime: %d", 3, ft_is_prime(3));
	printf("\nnumber: %d, is_prime: %d", 5, ft_is_prime(5));
	printf("\nnumber: %d, is_prime: %d", 144, ft_is_prime(144));
	printf("\nnumber: %d, is_prime: %d", 17, ft_is_prime(17));
	printf("\nnumber: %d, is_prime: %d", -22, ft_is_prime(-22));
	printf("\nnumber: %d, is_prime: %d", 0, ft_is_prime(0));
	printf("\nnumber: %d, is_prime: %d", 2, ft_is_prime(2));
	printf("\nnumber: %d, is_prime: %d", 2147483647, ft_is_prime(2147483647));
	printf("\n");
}

void	test_ex07(void)
{
	printf("\nTesting ex07/ft_find_next_prime.c ...\n\n");
	printf("\nnumber: %d, find_next_prime: %d", 1, ft_find_next_prime(1));
	printf("\nnumber: %d, find_next_prime: %d", 4, ft_find_next_prime(4));
	printf("\nnumber: %d, find_next_prime: %d", 3, ft_find_next_prime(3));
	printf("\nnumber: %d, find_next_prime: %d", 5, ft_find_next_prime(5));
	printf("\nnumber: %d, find_next_prime: %d", 144, ft_find_next_prime(144));
	printf("\nnumber: %d, find_next_prime: %d", 17, ft_find_next_prime(17));
	printf("\nnumber: %d, find_next_prime: %d", -22, ft_find_next_prime(-22));
	printf("\nnumber: %d, find_next_prime: %d", 0, ft_find_next_prime(0));
	printf("\nnumber: %d, find_next_prime: %d", 2, ft_find_next_prime(2));
	printf("\nnumber: %d, find_next_prime: %d", 2147483646, ft_find_next_prime(2147483646));
	printf("\n\n");
}

void	test_ex08(void)
{
	write(1, "Testing ex08/ft_ten_queens_puzzle.c ...", 39);
	write(1, "\n", 1);
	ft_ten_queens_puzzle();
	printf("End Output");
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
