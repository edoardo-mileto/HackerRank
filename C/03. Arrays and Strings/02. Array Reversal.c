#include <stdio.h>
#include <stdlib.h>

/*
   https://www.hackerrank.com/challenges/reverse-array-c
 */

int main()
{
	int num, *arr, i, temp;
	scanf("%d", &num);
	arr = (int*) malloc(num * sizeof(int));
	for(i = 0; i < num; i++) {
		scanf("%d", arr + i);
	}

	for (i = 0; i < num / 2; i++) {
		temp = (int) *(arr + num - i - 1);
		*(arr + num - i - 1) = *(arr + i);
		*(arr + i) = temp;
	}

	for(i = 0; i < num; i++)
		printf("%d ", *(arr + i));
	return 0;
}
