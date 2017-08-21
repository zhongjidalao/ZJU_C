#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	double foot;
	double inch;

	scanf("%lf %lf",&foot,&inch);

	printf("身高是%lf米。\n", ((foot + inch / 12) * 0.3048) );

	system("pause");
	return 0;
}