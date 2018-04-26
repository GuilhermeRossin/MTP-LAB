#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	double vetor[1000], soma =0;
	int num, i;
	printf("\nDigite o numero: ");
	scanf("%d", &num);
	for(i=0; i<1000; i++){
		vetor[i] = rand()%num+1; 
	}
	for(i=0; i<1000; i++){
		soma = soma + vetor[i];
	}
	printf("Valor medio: %lf", soma/1000);
	return 0;
}