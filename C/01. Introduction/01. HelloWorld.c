#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
   https://www.hackerrank.com/challenges/hello-world-c
 */

int main()
{
	char s[100];

	gets(s);

	printf("Hello, World!\n%s", s);
	return 0;
}
