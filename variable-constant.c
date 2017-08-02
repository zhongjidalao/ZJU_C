#include <stdio.h>
#include <stdlib.h>

int main()
{
	int price = 0;
	int amount = 100;

	printf("收你（元）\n");
	scanf("%d",&price);

	printf("请输入票面\n");
	scanf("%d",&amount);

	int change = amount - price;

	printf("找您%d元",change );

	system("pause");
	return 0;
}
