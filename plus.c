#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a;
	int b;

	printf("请输入两个整数：\n");
	scanf("%d %d",&a,&b);
	printf("%d + %d = %d\n",a,b,a+b);

	system("pause");
	return 0;
}
