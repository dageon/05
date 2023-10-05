#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num=0;
	char c;
	
	printf("input a string: ");
	
	while( (c=getchar()) != '\n'){
		if(c>=48 && c<=57)		
			num = num + 1;
	}
	
	printf("the number of digits is %i", num);
	
	return 0;
}
