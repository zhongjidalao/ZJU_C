#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	int a,b,c;
	printf("应该收您：\n");
	scanf("%d",&a);

	printf("实际收您：\n");
	scanf("%d",&b);

	c = b - a;

	if(c > 0){
		printf("找您%d（元）\n", c);
	}else if(c == 0){
		printf("刚好。\n");
	}else{
		printf("您还应该给%d（元）\n", -c);
	}

	system("pause");
	return 0;
}
