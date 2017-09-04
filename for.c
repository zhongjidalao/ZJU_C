#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	//计算一个数的阶乘
	int n;

	scanf("%d", &n);
	int fact = 1;

	for (int i = 2; i <= n; i++){
		fact *= i;
	}

	printf("%d != %d\n", n, fact);

	system("pause");
	return 0;
}