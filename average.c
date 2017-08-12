#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	double a,b;

	scanf("%lf %lf",&a,&b);

	double c = (a+b)/2;

	printf("%lf和%lf的平均值=%lf\n", a,b,c);

	system("pause");
	return 0;
}

