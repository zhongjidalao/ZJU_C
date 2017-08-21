#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

	int a,b,c;
	printf("应该收您：");
	scanf("%d",&a);

	printf("请输入票面：");
	scanf("%d",&b);

	c = b - a;

	if(c > 0){
		printf("找您：%d", c);
	}else if(c == 0){
		printf("刚好");
	}else{
		printf("还差%d", -c);
	}

	system("pause");
	return 0;
}
