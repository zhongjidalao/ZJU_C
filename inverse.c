#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int x;
	scanf("%d", &x);
	// x = 12345;

	int digit;
	int ret = 0;

	while( x > 0){
		digit = x % 10;
		printf("%d\n", digit);
		ret = ret * 10 + digit;
		printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);
		x /= 10;
	}
	printf("%d\n", ret);

	system("pause");
	return 0;
}