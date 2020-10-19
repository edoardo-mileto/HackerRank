#include <stdio.h>
#include <stdlib.h>

/*
   https://www.hackerrank.com/challenges/pointer-in-c
 */

void update(int *a,int *b) {
	int n = *a, m = *b;
	*a = n + m;
	*b = abs(n - m);
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return 0;
}
