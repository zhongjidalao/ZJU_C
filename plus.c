#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a;
	int b;

	printf("输入两个正整数：\n");
	scanf("%d %d",&a,&b);
	printf("%d + %d = %d\n",a,b,a+b);

	system("pause");
	return 0;
}
