#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - to add numbers
 * @a: number to be added
 * @b: number to be adde
 * Return: integer.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - to subract numbers.
 * @a: first operand
 * @b: second operand
 * Return: integer.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - to multiply numbers
 * @a: first operand
 * @b: second operand
 * Return: integer.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - to divide numbers.
 * @a: fiirst operand
 * @b: second operand.
 * Return: integer.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}

/**
 * op_mod - modulo operater.
 * @a: first operand.
 * @b: second operand.
 * Return: integer.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
