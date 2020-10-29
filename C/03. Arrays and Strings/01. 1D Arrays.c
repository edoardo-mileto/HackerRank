#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int n_size, i, sum = 0;
  scanf("%d", &n_size);
  for (i = 0; i < n_size; i++){
    int tmp;
    scanf("%d", &tmp);
    sum += tmp;
  }
  printf("%d\n", sum);
	return 0;
}
