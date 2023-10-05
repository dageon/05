#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, sum = 0;
	
	printf("input a number: ");
	scanf("%i", &n);
	
	for(i=1; i<=n; i++)
		sum = sum + i;
	
	printf("The result is %i", sum);
	
	return 0;
}
