// GCF.cpp : Greatest Common Factor (using the Euclidian method)
//

#include "stdafx.h"

#include <stdlib.h>
#include <string.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int gcf(int divisor, int dividend)
{
	if (dividend % divisor == 0)
		return divisor;
	else return gcf(dividend % divisor, divisor);
}



void main(int argc, char *argv[])
{
	if (argc != 3) {
		printf("usage: %s num1 num2\n", argv[0]);
		return;
	}
	int a1 = atoi(argv[1]);
	int a2 = atoi(argv[2]);
	printf("GCF of %d and %d is %d\n", a1, a2, gcf(MIN(a1, a2), MAX(a1, a2)));
}