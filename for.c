#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n;

	scanf("%d", &n);
	int fact = 1;

	int i = 1;
	for (i = 1; i < n; i++)
	{
		fact *= i;
	}

	printf("%d != %d\n", n, fact);

	system("pause");
	return 0;
}