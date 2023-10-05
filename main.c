#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, answer = 59, sum = 0;
	
	do{
		printf("Guess a number : ");
		scanf("%i", &n);
		
		if(n>answer)
			printf("high!\n");
		else if(n<answer)
			printf("low!\n");
		else
			printf("Congratulation! ");
			
		sum = sum + 1;
	} while(n!=answer);
	
	printf("trials:%i\n", sum);
	
	return 0;
}
