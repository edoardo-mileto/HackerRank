#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
   https://www.hackerrank.com/challenges/for-loop-in-c
 */

int main()
{
	int a, b;
	scanf("%d\n%d", &a, &b);
	const char *c[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	if (a < 10) {
		if (b < 10) {
			for (int i = a; i <= b; i++) {
				printf("%s\n", c[i]);
			}
		} else {
			for (int i = a; i < 10; i++) {
				printf("%s\n", c[i]);
			}
			int counter2 = 0;
			while (counter2 < b - 9) {
				if(counter2 % 2 == 0) {
					printf("even\n");
				} else {
					printf("odd\n");
				}
				counter2++;
			}
		}
	} else {
		int counter = 0;
		while (counter < b - 9) {
			if(counter % 2 == 0) {
				printf("even\n");
			} else {
				printf("odd\n");
			}
			counter++;
		}
	}
	return 0;
}
