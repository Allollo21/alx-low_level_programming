#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 *op_add - Returns summation of 2 nums
 *@a: number
 *@b: number
 *Return: always 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Returns substraction
 *@a: number
 *@b: number
 *Return: always 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - returns multiplication of 2 nums
 *@a: number
 *@b: number
 *Return: always 0
 */
int op_mul(int a, int b)
{
	return (a *b);
}

/**
 *op_div - retuns division of 2 nums
 *@a: number
 *@b: number
 *Return: always 0
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - returnd modulo of 2 nums
 *@a: number
 *@b: number
 *Return: always 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}
