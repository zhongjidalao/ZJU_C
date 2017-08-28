#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int x;
	scanf("%d", &x);
	int n = 0;

	do{
		x /= 10;
		n++;
	}while(x > 0);

	printf("%d\n", n);

	system("pause");
	return 0;
}