#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	int a,b,c;
	printf("Ӧ��������\n");
	scanf("%d",&a);

	printf("ʵ��������\n");
	scanf("%d",&b);

	c = b - a;

	if(c > 0){
		printf("����%d��Ԫ��\n", c);
	}else if(c == 0){
		printf("�պá�\n");
	}else{
		printf("����Ӧ�ø�%d��Ԫ��\n", -c);
	}

	system("pause");
	return 0;
}
