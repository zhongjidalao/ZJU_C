#include <stdio.h>
#include <stdlib.h>

// int main(int argc, char const *argv[])
// {
// 	int hour1,minute1;
// 	int hour2,minute2;

// 	scanf("%d %d",&hour1,&minute1);
// 	scanf("%d %d",&hour2,&minute2);

// 	int t1 = hour1 * 60 + minute1;
// 	int t2 = hour2 * 60 + minute2;

// 	int t = t2 - t1;

// 	printf("ʱ�����%dСʱ%d�֡�\n", t/60,t%60);

// 	system("pause");
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	int hour1,minute1;
	int hour2,minute2;

	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);

	int ih = hour2 - hour1;
	int im = minute2 - minute1;

	if (im < 0){
		im = 60 + im;
		ih--;	
	}
	printf("ʱ�����%dСʱ%d�֡�\n", ih,im);
	system("pause");
	return 0;
}
