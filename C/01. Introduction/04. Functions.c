#include <stdio.h>

/*
   https://www.hackerrank.com/challenges/functions-in-c
 */

int max_of_four(int a, int b, int c, int d){
	int numbers[4] = {a, b, c, d};
	int maxnumber = 0;
	for (int i = 0; i < 4; i++) {
		if (maxnumber < numbers[i]) {
			maxnumber = numbers[i];
		}
	}
	return maxnumber;
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);

	return 0;
}
