#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a;
	
	printf("���� �ϳ��� �Է��Ͻÿ� :");
	scanf("%i", &a);
	
	if(a > 0)
		printf("����Դϴ�.\n");
	else if(a < 0)
		printf("�����Դϴ�.\n");
	else
		printf("0 �Դϴ�.\n");
	
	return 0;
}
