#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a = 5;
	int b = 6;
	int c = 0;

	c = a;
	a = b;
	b = c;

	printf("a=%d,b=%d\n", a,b);

	system("pause");
	return 0;
}
