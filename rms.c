#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int number;
	int sum = 0;
	int count = 0;

	scanf("%d",&number);
	while(number != -1){
		sum += number;
		count++;
		scanf("%d",&number);
	}

	printf("%f\n", 1.0*sum/count);

	system("pause");
	return 0;
}