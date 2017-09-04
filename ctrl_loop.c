#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char const *argv[])
{
	int x;

	// scanf("%d", &x);
	for ( x=1; x<=100; x++){
		int i;
		int isPrime = 1;
		for( i=2; i<x; i++ ){
			if( x % i == 0){
				isPrime = 0;
				break;
			}
		}
		if( isPrime == 1 ){
			printf("%d \n" ,x);
		}
	}

	system("pause");
	return 0;
}