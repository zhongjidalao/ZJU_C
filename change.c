#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	int a,b,c;
	printf("Ӧ��������20");
	scanf("%d",&a);

	printf("������Ʊ�棺");
	scanf("%d",&b);

	c = b - a;

	if(c > 0){
		printf("������%d", c);
	}else if(c == 0){
		printf("�պ�");
	}else{
		printf("����%d", -c);
	}

	system("pause");
	return 0;
}