#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a;
	
	printf("���� �ϳ��� �Է��Ͻÿ� :");
	scanf("%i", &a);
	
	if(a < 0)
		printf("���밪�� %i �Դϴ�.\n", -a);
	else
		printf("���밪�� %i �Դϴ�.\n", a);
	
	return 0;
}
