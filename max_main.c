#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	int a = 0;
	int b = 0;
	int c = 0;

	printf("请输三个正整数：\n");
	scanf("%d %d %d",&a,&b,&c);

	if(a > b > c){
		printf("\n");
	}

	system("pause");
	return 0;
}
