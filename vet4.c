#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, num, vet[i], menor, maior;
	printf("Digite um numero de termos: ");
	scanf("%d", &num);
	for(i=0; i<num; i++)
	{
		vet[i] = rand()%11;
	}
	maior = vet[0];
	for(i=0; i<num; i++)
	{
		if(maior < vet[i])
			maior = vet[i];
	}
	menor = vet[0];
	for(i=0; i<num; i++)
	{
		if(menor > vet[i])
			menor = vet[i];
	}
	printf("\nMaior: %d \nMenor: %d ", maior, menor);
	return 0;
}