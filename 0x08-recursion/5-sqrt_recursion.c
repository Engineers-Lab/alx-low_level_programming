#include "main.h"
/**
 *_sqrt_recursion - computes square root of n
 *@n: the nomber to be squared
 *
 *Return: result
 */
int _sqrt_recursion(int n)
{
	static int t = n;
	static int z = 1;

	if (t - z < 1)
		return (t);
	else
	{
		t = (t + z) / 2;
		z = t / z;
		return (_sqrt_recursion(n));
	}
}
