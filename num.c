#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int x;
	int n = 0;

	scanf("%d",&x);

	while(x > 0){
		n++;
		x /= 10;
	}

	printf("%d\n", n);

	system("pause");
	return 0;
}