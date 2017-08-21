#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int type;

	scanf("%d",&type);

	switch(type){
		case 1:
			printf("第一个\n");
			break;
		case 2:
			printf("第二个\n");
			break;
		default:
			printf("跳出\n");
			break;
	}

	system("pause");
	return 0;
}