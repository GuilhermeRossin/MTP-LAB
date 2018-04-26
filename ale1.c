#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int x;
	printf("Numero sorteado 1: %d", rand()%100);
	while(x<100 ){
		x=rand()%294;
		if(x>100)
		printf("\nNumero sorteado 2: %d", x);	
	}
	return 0;
}