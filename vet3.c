#include <stdio.h>
#include <conio.h>

int main()
{
	float vet[10], soma = 0, mult = 1;
	int i;
	for(i=0; i<10; i++)
	{
		printf("\nDigite o numero da posicao %d: ", i+1);
		scanf("%f", &vet[i]);
	}
	for(i=0; i<10; i++)
	{
		soma = soma + vet[i];
		mult = mult * vet[i];	
	}
	printf("\nSomatorio: %f \nProdutorio: %f ", soma, mult);
	return 0;
}