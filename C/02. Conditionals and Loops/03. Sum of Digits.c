#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
   https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number
 */

int main() {
	int n, sum = 0;
	scanf("%d", &n);

	while (n / 10 != 0) {
		sum += (n % 10);
		n = n / 10;
	}

	sum += (n % 10);
	printf("%d\n", sum);

	return 0;
}
