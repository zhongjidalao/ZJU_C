#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int type;

	scanf("%d",&type);

	switch(type){
		case 1:
			printf("��һ��\n");
			break;
		case 2:
			printf("�ڶ���\n");
			break;
		default:
			printf("����\n");
			break;
	}

	system("pause");
	return 0;
}