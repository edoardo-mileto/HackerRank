#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
   https://www.hackerrank.com/challenges/playing-with-characters
 */

int main()
{
	char ch, s[20], sen[50];

	scanf("%c", &ch);
	printf("%c\n", ch);

	scanf("%s", &s);
	printf("%s\n",s);

	scanf("\n");

	scanf("%[^\n]%*c", &sen);
	printf("%s\n", sen);
	return 0;
}
