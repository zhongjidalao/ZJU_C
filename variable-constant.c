#include <stdio.h>
#include <stdlib.h>

int main()
{
	int price = 0;
	int amount = 100;

	printf("���㣨Ԫ��\n");
	scanf("%d",&price);

	printf("������Ʊ��\n");
	scanf("%d",&amount);

	int change = amount - price;

	printf("����%dԪ",change );

	system("pause");
	return 0;
}
