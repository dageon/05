#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a;
	
	printf("정수 하나를 입력하시오 :");
	scanf("%i", &a);
	
	if(a < 0)
		printf("절대값은 %i 입니다.\n", -a);
	else
		printf("절대값은 %i 입니다.\n", a);
	
	return 0;
}
