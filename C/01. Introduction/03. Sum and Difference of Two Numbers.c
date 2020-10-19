#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
   https://www.hackerrank.com/challenges/sum-numbers-c/
 */

int main()
{
	int a, b, sumInt, difInt;
	float c, d, sumFloat, difFloat;

	scanf("%d %d", &a, &b);
	scanf("%f %f", &c, &d);

	sumInt = a + b;
	difInt = a - b;
	sumFloat = c + d;
	difFloat = c - d;

	printf("%d %d\n", sumInt, difInt);
	printf("%.1f %.1f", sumFloat, difFloat);
}
