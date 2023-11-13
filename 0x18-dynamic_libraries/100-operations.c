#include <stdio.h>

int add(int c, int o)
{
	return (c + o);
}

int sub(int c, int o)
{
	return (c - o);
}

int mul(int c, int o)
{
	return (c * o);
}

int div(int c, int o)
{
	if (o == 0)
	{
		printf("Error: Divition by zero\n");
		return (0);
	}
	return (c / o);
}

int mod(int c, int o)
{
	if (o == 0)
	{
		printf("Error: Divition by zero\n");
		return (0);
	}
	return (c % o);
}
