#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	srand(time(0));
	int number = rand()%100 + 1;
	int count = 0;
	int a = 0;

	printf("���Ѿ������һ��1��100֮�������\n");
	do{
		printf("������1��100֮�������\n");
		scanf("%d",&a);
		count++;
		if(a > number){
			printf("��µ������ˡ�\n");
		}else if(a < number){
			printf("��µ���С�ˡ�\n");
		}
	}while(a != number);

	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);

	system("pause");
	return 0;
}