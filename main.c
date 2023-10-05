#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, result;
	char op;
	
	printf("enter the calculation : ");
	scanf("%i %c %i", &a, &op, &b);
	
	switch(op){
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
		case '%':
			result = a % b;
			break;
	}
	
	printf(" = %i\n", result);
	
	return 0;
}
