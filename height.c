#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	double foot;
	double inch;

	scanf("%lf %lf",&foot,&inch);

	printf("�����%lf�ס�\n", ((foot + inch / 12) * 0.3048) );

	system("pause");
	return 0;
}
