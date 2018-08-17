#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//
//
//
//int main()
//{
//	
//	int x;
//	int Z;
//	scanf("%d",&x);
//	for (int i = 1; i< x; i++)
//	{
//		Z = x*i;
//	}		printf("%d\n", Z);
//
//	return 0;
//}
#include <stdio.h>

int getValue()
{

	int n;

	scanf("%d%*c", &n);
	return(n);
}

int factorial(int n)
{

	int i, f;

	f = 1;
	for (i = 1; i <= n; i++)
		f = f * i;

	return(f);
}

void printFactorial(int f)
{

	printf("%d", f);

	return;
}

int main()
{

	int f = getValue();
	factorial(f);
	printFactorial(factorial(f));

	return(0);
}